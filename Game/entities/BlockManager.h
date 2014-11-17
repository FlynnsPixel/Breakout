#include "AT.h"
#include "ATSprite.h"
#include "Block.h"
#include <vector>

#pragma once

class Manager;

class BlockManager {

	public:
		BlockManager(Manager* refmanager);

		int blocksx = 12;
		int blocksy = 8;
		ATSprite* block;
		std::vector<Block*>* blocks = new std::vector<Block*>();
		std::vector<ATVector4>* colours = new std::vector<ATVector4>();
		Manager* manager;

		void createblocks();
		void update();
		void render();
		void deinit();
};