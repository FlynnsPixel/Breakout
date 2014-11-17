#include "Paddle.h"
#include "../tools/Log.h"
#include "ATInput.h"

class Manager {

	public:
		static int screenwidth;
		static int screenheight;
};

Paddle::Paddle(Manager* refmanager) {
	manager = refmanager;
}

void Paddle::init() {
	//create the paddle sprite and position it in the bottom middle of the screen
	ATSprite_Create(&paddle);
	ATSprite_AddSpriteSet(paddle, "paddle.png");
	pos.v.x = manager->screenwidth / 2;
	pos.v.y = 100;
	pos.v.z = 0;

	//setup initial speed values
	speedx = 0;
	accelx = 20;
	maxspeed = 40;
}

void Paddle::update() {
	//keyboard input for applying acceleration to speedx when moving left/right
	if (ATInput_IsDown(ATD_Keyboard, ATKIM_Right)) {
		pos.v.x += accelx;
	}else if (ATInput_IsDown(ATD_Keyboard, ATKIM_Left)) {
		pos.v.x -= accelx;
	}
	//make sure speedx doesn't go over the max speed
	if (speedx >= maxspeed) { speedx = maxspeed;
	}else if (speedx <= -maxspeed) { speedx = -maxspeed; }

	//apply speedx to the paddle position
	pos.v.x += speedx;
}

void Paddle::render() {
	ATSprite_Render(paddle, pos);
}

void Paddle::deinit() {
	ATSprite_Destroy(paddle);
}
