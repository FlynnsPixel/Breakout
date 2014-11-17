#include "UIManager.h"
#include "ATInput.h"
#include "../GameState.h"
#include "../client/Client.h"
#include "../audio/AudioAssets.h"
#include "../entities/BlockManager.h"

class Manager {

	public:
		static int screenwidth;
		static int screenheight;
		static GameState* gamestate;
		static nuggeta::Client* client;
		static BlockManager* blockmanager;
};

UIManager::UIManager(Manager* refmanager) {
	manager = refmanager;
}

void UIManager::createmenuui() {
	infotext = new Text(manager->screenwidth / 2, manager->screenheight - 40, 
		"breakout", 32, ATVector4::White, Align::center);

	Text* singletext = new Text(manager->screenwidth / 2, manager->screenheight / 2, 
		"singleplayer", 32, ATVector4::White, Align::center);
	Text* cooptext = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - 40, 
		"co-op", 32, ATVector4::White, Align::center);
	menutexts->push_back(singletext);
	menutexts->push_back(cooptext);
	updatemenu();

	showmenu = true;
	menuid = 0;
}

void UIManager::createcoopui() {
	infotext = new Text(manager->screenwidth / 2, manager->screenheight - 40, 
		"co-op mode", 32, ATVector4::White, Align::center);

	for (int i = 0; i < 5; ++i) {
		Text* game = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - (i * 40), 
			"[empty]", 32, ATVector4::White, Align::center);
		menutexts->push_back(game);
	}
	Text* creategametext = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - 280,
		"create", 32, ATVector4::White, Align::center);
	menutexts->push_back(creategametext);
	updatemenu();

	showmenu = false;
	menuid = 0;
}

void UIManager::creategameui() {
	scoretext = new Text(100, manager->screenheight - 40,
		"score: 0", 32, ATVector4::White, Align::left);
	infotext = new Text(manager->screenwidth - 100, manager->screenheight - 40,
		"lives: 99", 32, ATVector4::White, Align::right);

	score = 0;
	lives = 4;
	updategameui();
	showmenu = false;
	menuid = 0;
}

void UIManager::createwinscreenui() {
	infotext = new Text(manager->screenwidth / 2, manager->screenheight - 40,
		"you win!", 32, ATVector4::White, Align::center);

	Text* replaytext = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - 100,
	"replay", 32, ATVector4::White, Align::center);
	menutexts->push_back(replaytext);
	Text* exittext = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - 140,
	"exit", 32, ATVector4::White, Align::center);
	menutexts->push_back(exittext);

	showmenu = true;
	menuid = 0;
	updatemenu();
}

void UIManager::createlosescreenui() {
	infotext = new Text(manager->screenwidth / 2, manager->screenheight - 40,
		"you lose :(", 32, ATVector4::White, Align::center);

	Text* replaytext = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - 100,
	"try again", 32, ATVector4::White, Align::center);
	menutexts->push_back(replaytext);
	Text* exittext = new Text(manager->screenwidth / 2, (manager->screenheight / 2) - 140,
	"exit", 32, ATVector4::White, Align::center);
	menutexts->push_back(exittext);

	showmenu = true;
	menuid = 0;
	updatemenu();
}

void UIManager::removemenuui() {
	delete infotext;
	for (int n = 0; n < menutexts->size(); ++n) {
		delete menutexts->at(n);
	}
	menutexts->clear();
	showmenu = false;
}

void UIManager::removecoopui() {
	delete infotext;
	for (int n = 0; n < menutexts->size(); ++n) {
		delete menutexts->at(n);
	}
	menutexts->clear();
	showmenu = false;
}

void UIManager::removegameui() {
	delete scoretext;
}

void UIManager::removewinscreenui() {
	delete infotext;
	for (int n = 0; n < menutexts->size(); ++n) {
		delete menutexts->at(n);
	}
	menutexts->clear();
	showmenu = false;
}

void UIManager::removelosescreenui() {
	delete infotext;
	for (int n = 0; n < menutexts->size(); ++n) {
		delete menutexts->at(n);
	}
	menutexts->clear();
	showmenu = false;
}

void UIManager::updatemenu() {
	if (menuid <= 0) { menuid = 0; }else if (menuid >= menutexts->size()) { menuid = menutexts->size() - 1; }
	for (int n = 0; n < menutexts->size(); ++n) {
		if (n == menuid) { menutexts->at(n)->colour = ATVector4::Green;
		}else { menutexts->at(n)->colour = ATVector4::White; }
	}
}

void UIManager::updategameui() {
	std::string scorestring = "score: " + std::to_string(score);
	char* buffer = new char[scorestring.length()];
	strcpy(buffer, scorestring.c_str());
	scoretext->textupdate(buffer);

	scorestring = "lives: " + std::to_string(lives);
	buffer = new char[scorestring.length()];
	strcpy(buffer, scorestring.c_str());
	infotext->textupdate(buffer);
}

bool UIManager::update() {
	if (showmenu) {
		if (menutexts->size() != 0) {
			if (keypressed >= 10 && ATInput_IsDown(ATD_Keyboard, ATKIM_Up)) {
				if (menuid >= 1) {
					ATAudio_Stop(AudioAssets::menuselectref);
					ATAudio_Play(AudioAssets::menuselect, &AudioAssets::menuselectref, false);
				}
				--menuid; updatemenu(); keypressed = 0;
			}else if (keypressed >= 10 && ATInput_IsDown(ATD_Keyboard, ATKIM_Down)) {
				if (menuid <= menutexts->size() - 2) {
					ATAudio_Stop(AudioAssets::menuselectref);
					ATAudio_Play(AudioAssets::menuselect, &AudioAssets::menuselectref, false);
				}
				++menuid; updatemenu(); keypressed = 0;
			}else {
				++keypressed; if (keypressed >= 10) { keypressed = 10; }
			}
		}
	}

	if (manager->gamestate->state == State::mainselect) {
		if (showmenu) {
			if (enterpressed >= 10 && ATInput_IsDown(ATD_Keyboard, ATKIM_Return)) {
				if (menuid == 0) {
					manager->gamestate->switchto(State::game);
				}else if (menuid == 1) {
					manager->gamestate->switchto(State::coopconnect);
				}
				enterpressed = 0;
			}
		}
	}else if (manager->gamestate->state == State::coopconnect) {
		if (showmenu) {
			if (enterpressed >= 10 && ATInput_IsDown(ATD_Keyboard, ATKIM_Return)) {
				if (menuid <= 4 && menutexts->at(menuid)->rendertext != "[empty]") {
					showmenu = false;
					manager->client->clientconnection->joingame(manager->client->clientconnection->getidfromgame(menuid));
				}else if (menuid == 5) {
					showmenu = false;
					manager->client->clientconnection->creategame();
				}
				enterpressed = 0;
			}
		}
	}else if (manager->gamestate->state == State::game) {
		if (lives <= 0) {
			manager->gamestate->switchto(State::losescreen);
		}else if (manager->blockmanager->blocks->size() <= 0) {
			manager->gamestate->switchto(State::winscreen);
		}
	}else if (manager->gamestate->state == State::winscreen) {
		if (showmenu) {
			if (enterpressed >= 10 && ATInput_IsDown(ATD_Keyboard, ATKIM_Return)) {
				if (menuid == 0) {
					showmenu = false;
					manager->gamestate->switchto(State::game);
				}else if (menuid == 1) {
					showmenu = false;
					manager->gamestate->switchto(State::mainselect);
				}
				enterpressed = 0;
			}
		}
	}else if (manager->gamestate->state == State::losescreen) {
		if (showmenu) {
			if (enterpressed >= 10 && ATInput_IsDown(ATD_Keyboard, ATKIM_Return)) {
				if (menuid == 0) {
					showmenu = false;
					manager->gamestate->switchto(State::game);
				}else if (menuid == 1) {
					showmenu = false;
					manager->gamestate->switchto(State::mainselect);
				}
				enterpressed = 0;
			}
		}
	}

	if (!ATInput_IsDown(ATD_Keyboard, ATKIM_Return)) {
		++enterpressed; if (enterpressed >= 10) { enterpressed = 10; }
	}

	return true;
}

bool UIManager::render() {
	if (showmenu) {
		for (int n = 0; n < menutexts->size(); ++n) {
			menutexts->at(n)->render();
		}
	}

	if (manager->gamestate->state == State::mainselect) {
		infotext->render();
	}else if (manager->gamestate->state == State::coopconnect) {
		infotext->render();
	}else if (manager->gamestate->state == State::game) {
		scoretext->render();
		infotext->render();
	}else if (manager->gamestate->state == State::winscreen) {
		infotext->render();
	}else if (manager->gamestate->state == State::losescreen) {
		infotext->render();
	}

	return true;
}

bool UIManager::deinit() {
	return true;
}
