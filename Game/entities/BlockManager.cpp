#include "BlockManager.h"
#include "../tools/Log.h"

class Manager {

	public:
		static int screenwidth;
		static int screenheight;
};

BlockManager::BlockManager(Manager* refmanager) {
	manager = refmanager;
}

void BlockManager::createblocks() {
	//create the block sprite and place it in the middle of the screen
	ATSprite_Create(&block);
	ATSprite_AddSpriteSet(block, "block.png");
	int startx = ((manager->screenwidth - (blocksx * 64)) / 2) + 32;
	int starty = manager->screenheight - 32;

	//creates the blocks with colours from red to green to blue
	float r = 1; float g = 0; float b = 0; float step = 1 / (float)(blocksy / 4);
	int offset = blocksx / (blocksx / 4);
	for (int y = 0; y < blocksy; ++y) {
		for (int x = abs(offset); x < blocksx - abs(offset); ++x) {
			//creates the block object and adds it to the block array
			Block* block = new Block(startx + (x * 64), starty - (y * 30), manager);
			block->rowx = x; block->rowy = y;
			blocks->push_back(block);
		}
		//modify r, g, b to create a gradient from red to green to blue and store it in the colour array
		ATVector4 colour;
		colour.f[0] = r; colour.f[1] = g; colour.f[2] = b; colour.f[3] = 1;
		if (g >= 1 && r > 0) { r -= step; }else if (r <= 0 && b < 1) { b += step;
		}else if (b >= 1) { g -= step; }else { g += step; }
		if (r <= 0) { r = 0; }
		colours->push_back(colour);

		--offset;
	}
}

void BlockManager::update() {
	//loops through all the blocks in the manager, updates them and removes them if they are queued to be removed
	for (int n = 0; n < blocks->size(); ++n) {
		blocks->at(n)->update();
		if (blocks->at(n)->removed) {
			blocks->erase(blocks->begin() + n); break;
		}
	}
}

void BlockManager::render() {
	//loops through all the blocks and renders them with the same texture as well as changing their vertex colour
	for (int n = 0; n < blocks->size(); ++n) {
		ATSprite_Render(block, blocks->at(n)->pos, 0, ATSPF_Center, 1, 1, 0, colours->at(blocks->at(n)->rowy));
	}
}

void BlockManager::deinit() {
	//removes the block sprite and removes every element in the block array as well as clearing it and the colours
	ATSprite_Destroy(block);
	for (int n = 0; n < blocks->size(); ++n) {
		delete blocks->at(n);
	}
	blocks->clear();
	colours->clear();
}