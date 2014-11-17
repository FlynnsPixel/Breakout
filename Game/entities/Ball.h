#include "AT.h"
#include "ATSprite.h"

#pragma once

class Manager;

class Ball {

	public:
		Ball(Manager* refmanager);

		int width = 32;
		int height = 32;
		ATVector4 pos;
		float rotation = 0;
		float speed = 4;
		bool removed = false;
		Manager* manager;

		void recalculatespeed();
		void hitwall(int wallangle);
		void balllose();

		void init();
		void update();

	private:
		float speedx = 0;
		float speedy = 0;
		int maxspeed = 4;
		int waittimer = 0;
		int waitdelay = 100;
		bool waited = false;
};