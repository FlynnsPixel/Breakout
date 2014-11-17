#include "Block.h"
#include "BallManager.h"
#include "../ui/UIManager.h"
#include "../audio/AudioAssets.h"
#include <vector>

class Manager {

	public:
		static BallManager* ballmanager;
		static UIManager* uimanager;
};

Block::Block(int x, int y, Manager* refmanager) {
	manager = refmanager;

	pos.v.x = x;
	pos.v.y = y;
	pos.v.z = 0;
}

void Block::update() {
	for (int n = 0; n < manager->ballmanager->balls->size(); ++n) {
		//bounding box collision check with the ball
		Ball* ball = manager->ballmanager->balls->at(n);
		if (pos.v.x >= ball->pos.v.x - ball->width &&
			pos.v.x <= ball->pos.v.x + ball->width &&
			pos.v.y >= ball->pos.v.y - ball->height &&
			pos.v.y <= ball->pos.v.y + ball->height) {
			//bounce off the ball with an offset rotation depending on where the ball is in relation to the ball
			ball->rotation = -ball->rotation;
			ball->recalculatespeed();
			++manager->uimanager->score;
			manager->uimanager->updategameui();
			ATAudio_Stop(AudioAssets::blockhitref);
			ATAudio_Play(AudioAssets::blockhit, &AudioAssets::blockhitref, false);
			removed = true;
		}
	}
}