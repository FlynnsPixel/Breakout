#include "Ball.h"
#include "../tools/Log.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "Paddle.h"
#include "../audio/AudioAssets.h"
#include "../ui/UIManager.h"
#include "BallManager.h"
#include "../GameState.h"
#include <vector>

class Manager {

	public:
		static int screenwidth;
		static int screenheight;
		static Paddle* paddle;
		static UIManager* uimanager;
		static BallManager* ballmanager;
		static GameState* gamestate;
};

Ball::Ball(Manager* refmanager) {
	manager = refmanager;
}

void Ball::init() {
	//set the ball position in the middle of the screen
	pos.v.x = (manager->screenwidth / 2) - 20;
	if (manager->ballmanager->balls->size() == 1) { pos.v.x += 40; }
	pos.v.y = manager->screenheight / 2;
	pos.v.z = 0;

	//set speed
	speed = 8;
	maxspeed = 8;

	//set the initial rotation to a random number between 20-160
	rotation = 80 + (rand() % 20);
	recalculatespeed();
}

void Ball::recalculatespeed() {
	//calculate speedx and speedy based on rotation
	speedx = speed * cos((M_PI / 180) * rotation);
	speedy = speed * sin((M_PI / 180) * rotation);
}

void Ball::hitwall(int wallangle) {
	//calculate new rotation to bounce off wall
	rotation = -(180 - rotation) + (wallangle - rotation) * 2;
	//recalculate speed based on new rotation
	recalculatespeed();
	if (rand() % 100 >= 50) {
		ATAudio_Stop(AudioAssets::bounce1ref);
		ATAudio_Play(AudioAssets::bounce1, &AudioAssets::bounce1ref, false);
	}else {
		ATAudio_Stop(AudioAssets::bounce2ref);
		ATAudio_Play(AudioAssets::bounce2, &AudioAssets::bounce2ref, false);
	}
}

void Ball::balllose() {
	if (manager->uimanager->lives > 1) {
		removed = true;
		ATAudio_Stop(AudioAssets::lostballref);
		ATAudio_Play(AudioAssets::lostball, &AudioAssets::lostballref, false);
		--manager->uimanager->lives;
		manager->uimanager->updategameui();
		manager->ballmanager->createball();
	}else {
		ATAudio_Stop(AudioAssets::gameoverref);
		ATAudio_Play(AudioAssets::gameover, &AudioAssets::gameoverref, false);
		manager->uimanager->lives = 0;
		manager->uimanager->updategameui();
	}
}

void Ball::update() {
	//initial waiting delay
	if (!waited) {
		++waittimer;
		if (waittimer >= waitdelay) {
			waited = true;
		}
		return;
	}

	//bounding box collision check with the paddle
	if (speedy <= 0 && pos.v.x >= manager->paddle->pos.v.x - (manager->paddle->width / 2) - 16 &&
		pos.v.x <= manager->paddle->pos.v.x + (manager->paddle->width / 2) + 16 &&
		pos.v.y >= manager->paddle->pos.v.y - (manager->paddle->height / 2) &&
		pos.v.y <= manager->paddle->pos.v.y + (manager->paddle->height / 2)) {
		//bounce off the paddle with an offset rotation depending on where the ball is in relation to the paddle
		hitwall(90); rotation += (manager->paddle->pos.v.x - pos.v.x) / 2.5f;
		recalculatespeed();
	}

	//check collision against the wall and bounce off
	if (speedx <= 0 && pos.v.x <= 0) { pos.v.x = 0; hitwall(180);
	}else if (speedx >= 0 && pos.v.x >= 960) { pos.v.x = 960; hitwall(180);
	}else if (speedy <= 0 && pos.v.y <= 0) { balllose();
	}else if (speedy >= 0 && pos.v.y >= 680) { pos.v.y = 680; hitwall(90); }
	pos.v.x += speedx;
	pos.v.y += speedy;

	//make sure speedx and speedy don't go over the maxspeed
	if (speedx >= maxspeed) { speedx = maxspeed; }else if (speedx <= -maxspeed) { speedx = -maxspeed; }
	if (speedy >= maxspeed) { speedy = maxspeed; }else if (speedy <= -maxspeed) { speedy = -maxspeed; }
}