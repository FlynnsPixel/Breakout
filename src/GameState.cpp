#include "GameState.h"
#include "AT.h"
#include "ATInput.h"
#include "entities/Paddle.h"
#include "client/Client.h"
#include "ui/UIManager.h"
#include "entities/BlockManager.h"
#include "entities/BallManager.h"
#include "tools/Log.h"

class Manager {

	public:
		static Paddle* paddle;
		static nuggeta::Client* client;
		static UIManager* uimanager;
		static BlockManager* blockmanager;
		static BallManager* ballmanager;
};

State GameState::state = State::mainselect;

GameState::GameState(Manager* refmanager) {
	manager = refmanager;
	OutputDebugStringA("initialised game state manager");
	OutputDebugStringA("\n");
}

void GameState::switchto(State newstate) {
	OutputDebugStringA("switching to state ");
	OutputDebugStringA(Log::tofloat(newstate));
	OutputDebugStringA("\n");
	removestate();
	state = newstate;
	createstate();
}

void GameState::createstate() {
	switch (state) {
		case State::mainselect:
			createmenuselect();
			break;
		case State::game:
			creategame();
			break;
		case State::coopconnect:
			createcoopconnect();
			break;
		case State::winscreen:
			createwinscreen();
			break;
		case State::losescreen:
			createlosescreen();
			break;
	}
	OutputDebugStringA("created state ");
	OutputDebugStringA(Log::tofloat(state));
	OutputDebugStringA("\n");
}

void GameState::createmenuselect() {
	manager->uimanager->createmenuui();
}

void GameState::creategame() {
	manager->paddle->init();
	manager->blockmanager->createblocks();
	manager->ballmanager->createballs();
	manager->uimanager->creategameui();
}

void GameState::createcoopconnect() {
	manager->uimanager->createcoopui();
	manager->client->connect();
}

void GameState::createwinscreen() {
	manager->uimanager->createwinscreenui();
}

void GameState::createlosescreen() {
	manager->uimanager->createlosescreenui();
}

void GameState::removestate() {
	switch (state) {
		case State::mainselect:
			removemenuselect();
			break;
		case State::game:
			removegame();
			break;
		case State::coopconnect:
			removecoopconnect();
			break;
		case State::winscreen:
			removewinscreen();
			break;
		case State::losescreen:
			removelosescreen();
			break;
	}
	OutputDebugStringA("removed state ");
	OutputDebugStringA(Log::tofloat(state));
	OutputDebugStringA("\n");
}

void GameState::removemenuselect() {
	manager->uimanager->removemenuui();
}

void GameState::removegame() {
	manager->paddle->deinit();
	manager->blockmanager->deinit();
	manager->ballmanager->deinit();
	manager->uimanager->removegameui();
}

void GameState::removecoopconnect() {
	manager->client->onquit();
	manager->uimanager->removecoopui();
}

void GameState::removewinscreen() {
	manager->uimanager->removewinscreenui();
}

void GameState::removelosescreen() {
	manager->uimanager->removelosescreenui();
}

void GameState::prevstate() {
	switch (state) {
		case State::game:
			switchto(State::mainselect);
			break;
		case State::coopconnect:
			switchto(State::mainselect);
			break;
		case State::winscreen:
			switchto(State::mainselect);
			break;
		case State::losescreen:
			switchto(State::mainselect);
			break;
	}
}

void GameState::update() {
	if (!escapepressed && ATInput_IsDown(ATD_Keyboard, ATKIM_Escape)) {
		escapepressed = true;
		prevstate();
	}else {
		escapepressed = false;
	}
}
