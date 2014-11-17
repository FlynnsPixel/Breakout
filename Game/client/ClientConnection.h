#include "NSampleProtocol.h"
#include "NuggetaPlug.h"
#include "../ui/UIManager.h"
#include "Room.h"

#pragma once

class Manager;

namespace nuggeta {

	class ClientConnection : public NSampleProtocol {

		public:
			ClientConnection();
			virtual ~ClientConnection();

			char* gameid;
			char* id;
			std::vector<Room*>* rooms = new std::vector<Room*>();
			Manager* manager;

			void creategame();
			void joingame(char* id);
			void getgamelist();
			char* getidfromgame(int index);

			virtual void init();
			virtual void mainLoop();
			virtual void stop();

		private:
			NuggetaPlug* nuggetaPlug;
			void handlestartresponse(StartResponse*);
			void handlecreategame(CreateGameResponse*);
			void handlejoingame(JoinGameResponse*);
			void handlegetgames(GetGamesResponse*);
			void handlegetprofile(GetPlayerProfileResponse*);
	};
}
