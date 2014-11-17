#include "Text.h"
#include <vector>

#pragma once

class Manager;

class UIManager {

	public:
		UIManager(Manager* refmanager);

		Text* infotext;
		Text* scoretext;
		int menuid = 0;
		bool showmenu = false;
		int keypressed = 0;
		int enterpressed = 0;
		std::vector<Text*>* menutexts = new std::vector<Text*>();
		int score;
		int lives;
		Manager* manager;

		void updatemenu();
		void updategameui();

		void createmenuui();
		void createcoopui();
		void creategameui();
		void createwinscreenui();
		void createlosescreenui();

		void removemenuui();
		void removecoopui();
		void removegameui();
		void removewinscreenui();
		void removelosescreenui();

		bool update();
		bool render();
		bool deinit();
};


