#include "Manager.h"

#pragma once

class Game {

	public:
		static Manager* manager;

		static bool gameinit();
		static bool gameupdate();
		static bool gamerender();
		static bool gamedeinit();
};


