#include "AT.h"
#include "ATSprite.h"

#pragma once

class Manager;

class Block {

	public:
		Block(int x, int y, Manager* refmanager);

		int width = 64;
		int height = 32;
		int rowx = 0;
		int rowy = 0;
		ATVector4 pos;
		ATVector4 colour;
		bool removed = false;
		Manager* manager;

		void update();
};