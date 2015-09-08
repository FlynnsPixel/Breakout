#include "AT.h"
#include "ATSprite.h"
#include "Ball.h"
#include <vector>

#pragma once

class Manager;

class BallManager {

	public:
		BallManager(Manager* refmanager);

		ATSprite* ball;
		std::vector<Ball*>* balls = new std::vector<Ball*>();
		Manager* manager;

		void createballs();
		void createball();

		void update();
		void render();
		void deinit();
};