#include "BallManager.h"
#include "../tools/Log.h"

class Manager {

	public:
		static int screenwidth;
		static int screenheight;
};

BallManager::BallManager(Manager* refmanager) {
	manager = refmanager;
}

void BallManager::createballs() {
	//create the ball sprite and place it in the middle of the screen
	ATSprite_Create(&ball);
	ATSprite_AddSpriteSet(ball, "ball.png");

	for (int n = 0; n < 2; ++n) {
		createball();
	}
}

void BallManager::createball() {
	Ball* newball = new Ball(manager);
	newball->init();
	balls->push_back(newball);
}

void BallManager::update() {
	//loops through all the balls in the manager, updates them and removes them if they are queued to be removed
	for (int n = 0; n < balls->size(); ++n) {
		balls->at(n)->update();
		if (balls->at(n)->removed) {
			balls->erase(balls->begin() + n);
			--n;
		}
	}
}

void BallManager::render() {
	//loops through all the balls and renders the ball sprite in each of the ball's positions
	for (int n = 0; n < balls->size(); ++n) {
		ATSprite_Render(ball, balls->at(n)->pos);
	}
}

void BallManager::deinit() {
	//removes the ball sprite and removes every element in the ball array as well as clearing it and the colours
	ATSprite_Destroy(ball);
	for (int n = 0; n < balls->size(); ++n) {
		delete balls->at(n);
	}
	balls->clear();
}