#include "AT.h"
#include "ATSprite.h"

#pragma once

class Manager;

class Paddle {

	public:
		Paddle(Manager* refmanager);

		int width = 128;
		int height = 32;
		ATSprite* paddle;
		ATVector4 pos;
		Manager* manager;

		void init();
		void update();
		void render();
		void deinit();

	private:
		float speedx;
		float accelx;
		int maxspeed;
		float friction;
};