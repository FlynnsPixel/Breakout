#include "Manager.h"
#include "AT.h"
#include "ATRender.h"
#include "ATInput.h"
#include "ATVector4.h"
#include "audio/AudioAssets.h"

int Manager::screenwidth = 960;
int Manager::screenheight = 680;
Paddle* Manager::paddle;
nuggeta::Client* Manager::client;
UIManager* Manager::uimanager;
BlockManager* Manager::blockmanager;
GameState* Manager::gamestate;
BallManager* Manager::ballmanager;

bool Manager::init() {
	//initialises static classes
	srand(time(NULL));
	uimanager = new UIManager(this);
	paddle = new Paddle(this);
	client = new nuggeta::Client(this);
	blockmanager = new BlockManager(this);
	gamestate = new GameState(this);
	gamestate->createstate();
	ballmanager = new BallManager(this);
	AudioAssets::init();

	return true;
}

bool Manager::update() {
	//updates classes
	if (gamestate->state == State::game) {
		paddle->update();
		blockmanager->update();
		ballmanager->update();
	}
	uimanager->update();
	gamestate->update();

	return true;
}

bool Manager::render() {
	//clears the screen, sets the camera view and renders classes
	ATRender_Clear(ATCF_All, ATVector4::Black);
	ATRender_SetOrthoView(0, 0, screenwidth, screenheight, -1.0f, 1.0f);

	if (gamestate->state == State::game) {
		paddle->render();
		blockmanager->render();
		ballmanager->render();
	}
	uimanager->render();

	return true;
}

bool Manager::deinit() {
	gamestate->removestate();
	AudioAssets::deinit();

	return true;
}
