#include "ClientConnection.h"
#include "../tools/Log.h"
#include "Room.h"
#include "../GameState.h"

class Manager {

	public:
		static UIManager* uimanager;
		static GameState* gamestate;
};

namespace nuggeta {

	ClientConnection::ClientConnection() {
		isFinished = false;
		logger = NLoggerFactory::getLogger("ClientConnection");
	}

	ClientConnection::~ClientConnection() {
		delete logger;
		logger = 0;
	}

	void ClientConnection::init() {
		logger->info("[ClientConnection] Started");
		nuggetaPlug = new NuggetaPlug("nuggeta://quadball_5e921664-fffd-40cb-a9a0-5ddb85bfaad4");
		nuggetaPlug->start();
	}

	void ClientConnection::mainLoop() {
		std::vector<Message*>* messages = nuggetaPlug->pump();

		for (unsigned int i = 0; i < messages->size(); i++) {
			Message* message = (*messages)[i];
			logger->info(message->toString());
			if (message->getSerializerID() == StartResponse::serializerID) {
				handlestartresponse((StartResponse*)message);
			}else if (message->getSerializerID() == CreateGameResponse::serializerID) {
				handlecreategame((CreateGameResponse*)message);
			}else if (message->getSerializerID() == JoinGameResponse::serializerID) {
				handlejoingame((JoinGameResponse*)message);
			}else if (message->getSerializerID() == GetGamesResponse::serializerID) {
				handlegetgames((GetGamesResponse*)message);
			}else if (message->getSerializerID() == GetPlayerProfileResponse::serializerID) {
				handlegetprofile((GetPlayerProfileResponse*)message);
			}else if (message->getSerializerID() == NRawMessage::serializerID) {
				char* content = const_cast<char*>(((NRawMessage*)message)->getContent());
				char* temp;
				std::vector<char*>* splitcontent = new std::vector<char*>();
				temp = strtok(content, "|");
				while (temp != NULL) {
					splitcontent->push_back(temp);
					temp = strtok(NULL, "|");
				}

				std::string messageid = splitcontent->at(0);
				OutputDebugStringA(id);
				OutputDebugStringA("\n");
				if (messageid.find("[playerid]") != -1 && splitcontent->at(1) != id) {
					NRawMessage* message = new NRawMessage();
					std::string temp = "[playerid]|";
					temp += id;
					message->setContent(temp.c_str());
					nuggetaPlug->sendGameMessage(message, gameid);
					manager->gamestate->switchto(State::game);
				}

				delete splitcontent;
			}

			//release message
			delete message;
			message = 0;
		}

		//release vector
		delete messages;
		messages = 0;
	}

	void ClientConnection::handlegetprofile(GetPlayerProfileResponse* response) {
		GetPlayerProfileStatus* status = response->getGetPlayerProfileStatus();
		if (status == GetPlayerProfileStatus::SUCCESS) {
			logger->info("Got player profile successfully");
			manager->uimanager->infotext->textupdate("waiting for one more player...");
			char* tempid = new char[strlen(response->getProfile()->getPlayerId())];
			strcpy(tempid, response->getProfile()->getPlayerId());
			id = tempid;
			NRawMessage* message = new NRawMessage();
			std::string temp = "[playerid]|";
			temp += id;
			message->setContent(temp.c_str());
			nuggetaPlug->sendGameMessage(message, gameid);
		}else if (status == GetPlayerProfileStatus::FAILURE) {
			logger->info("--An error occurred while getting the player profile--");
			manager->uimanager->infotext->textupdate("an error occurred [#1348]");
		}else {
			logger->error("An error occurred while getting player profile");
			manager->uimanager->infotext->textupdate("an error occurred [#1349]");
		}
	}

	void ClientConnection::handlegetgames(GetGamesResponse* response) {
		GetGamesStatus* status = response->getGetGamesStatus();
		if (status == GetGamesStatus::SUCCESS) {
			logger->info("Got game list successfully");
			manager->uimanager->infotext->textupdate("game list");
			manager->uimanager->showmenu = true;
			std::vector<NGame*>* gamelist = response->getGames();
			OutputDebugStringA("games found: ");
			OutputDebugStringA(Log::tofloat(gamelist->size()));
			OutputDebugStringA("\n");
			rooms->clear();
			for (int n = 0; n < gamelist->size(); ++n) {
				Room* room = new Room();
				room->id = new char[strlen(gamelist->at(n)->getId())];
				strcpy(room->id, gamelist->at(n)->getId());
				//if (strlen(gamelist->at(n)->getName()) >= 1) {
					//room->name = new char[strlen(gamelist->at(n)->getName())];
					//strcpy(room->name, gamelist->at(n)->getName());
				//}
				rooms->push_back(room);
				OutputDebugStringA("game name: ");
				OutputDebugStringA(room->name);
				OutputDebugStringA(", game id: ");
				OutputDebugStringA(room->id);
				OutputDebugStringA("\n");
				manager->uimanager->menutexts->at(n)->textupdate("valid game");
				if (n >= manager->uimanager->menutexts->size() - 2) { break; }
			}
		}else {
			logger->error("An error occurred while getting games");
			manager->uimanager->infotext->textupdate("an error occurred [#1347]");
		}
	}

	void ClientConnection::handlejoingame(JoinGameResponse* response) {
		JoinGameStatus* status = response->getJoinGameStatus();
		if (status == JoinGameStatus::ACCEPTED) {
			logger->info("Joined game successfully");
			manager->uimanager->infotext->textupdate("getting profile...");
			nuggetaPlug->getPlayerProfile();
		}else if (status == JoinGameStatus::ALREADY_IN_GAME) {
			logger->warn("--Error: already in joined game--");
			manager->uimanager->infotext->textupdate("error: already in joined game [#1344]");
		}else if (status == JoinGameStatus::GAME_NOT_FOUND) {
			logger->error("--Joined game is not found--");
			manager->uimanager->infotext->textupdate("error: can not join game that does not exist [#1345]");
		}else {
			logger->error("An error occurred while connecting.");
			manager->uimanager->infotext->textupdate("an error occurred [#1346]");
		}
	}

	void ClientConnection::handlecreategame(CreateGameResponse* response) {
		CreateGameStatus* status = response->getCreateGameStatus();
		if (status == CreateGameStatus::SUCCESS) {
			logger->info("Creating game succeeded");
			manager->uimanager->infotext->textupdate("joining game...");
			char* tempid = new char[strlen(response->getGameId())];
			strcpy(tempid, response->getGameId());
			joingame(tempid);
			OutputDebugStringA("game id: ");
			OutputDebugStringA(gameid);
			OutputDebugStringA("\n");
		}else if (status == CreateGameStatus::INTERNAL_ERROR) {
			logger->warn("--Internal error while creating game--");
			manager->uimanager->infotext->textupdate("error: internal error [#1341]");
		}else if (status == CreateGameStatus::INVALID_CALL) {
			logger->error("--Invalid call while creating game--");
			manager->uimanager->infotext->textupdate("error: invalid call [#1342]");
		}else {
			logger->error("An unknown error occurred while connecting.");
			manager->uimanager->infotext->textupdate("an unknown error occurred [#1343]");
		}
	}

	void ClientConnection::handlestartresponse(StartResponse* response) {
		StartStatus* status = response->getStartStatus();
		if (status == StartStatus::READY) {
			logger->info("Connection ready with nuggeta.");
			manager->uimanager->infotext->textupdate("getting game list...");
			getgamelist();
		}else if (status == StartStatus::WARNED) {
			logger->warn("--Connection warning--");
			manager->uimanager->infotext->textupdate("error: connection warning occurred [#1337]");
		}else if (status == StartStatus::FAILED) {
			logger->error("--Connection failed--");
			manager->uimanager->infotext->textupdate("error: connection failed [#1338]");
		}else if (status == StartStatus::REFUSED) {
			logger->error("--Connection refused--");
			manager->uimanager->infotext->textupdate("error: connection refused [#1339]");
		}else {
			logger->error("An unknown error occurred while connecting.");
			manager->uimanager->infotext->textupdate("an unknown error occurred while connecting. [#1340]");
		}
	}

	void ClientConnection::creategame() {
		manager->uimanager->infotext->textupdate("creating game...");
		nuggetaPlug->createGame(NULL);
	}

	void ClientConnection::joingame(char* id) {
		gameid = id;
		OutputDebugStringA("Joining game with id: ");
		OutputDebugStringA(id);
		OutputDebugStringA("\n");
		manager->uimanager->infotext->textupdate("joining game...");
		nuggetaPlug->joinGame(id);
	}

	void ClientConnection::getgamelist() {
		manager->uimanager->infotext->textupdate("getting game list...");
		NuggetaQuery* query = new NuggetaQuery();
		query->setStart(0);
		query->setLimit(5);
		nuggetaPlug->getGames(query);
	}

	char* ClientConnection::getidfromgame(int index) {
		if (index < 0 || index >= rooms->size()) {
			return "";
		}
		return rooms->at(index)->id;
	}

	void ClientConnection::stop() {
		logger->info("[ClientConnection] Ended");
		nuggetaPlug->stop();
		rooms->clear();
	}
}
