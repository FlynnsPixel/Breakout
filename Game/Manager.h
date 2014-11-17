#include "entities/Paddle.h"
#include "client/Client.h"
#include "ui/UIManager.h"
#include "entities/Ball.h"
#include "entities/BlockManager.h"
#include "entities/BallManager.h"

#include "GameState.h"

#pragma once

class Manager {

	public:
		static int screenwidth;
		static int screenheight;
		static Paddle* paddle;
		static nuggeta::Client* client;
		static UIManager* uimanager;
		static BlockManager* blockmanager;
		static BallManager* ballmanager;
		static GameState* gamestate;

		bool init();
		bool update();
		bool render();
		bool deinit();
};


