#include "Game.h"

Manager* Game::manager;

bool Game::gameinit() {
	manager = new Manager();
	manager->init();
	return true;
}

bool Game::gameupdate() {
	manager->update();
	return true;
}

bool Game::gamerender() {
	manager->render();
	return true;
}

bool Game::gamedeinit() {
	manager->deinit();
	return true;
}
