#pragma once

enum State {
	mainselect,
	game,
	coopconnect,
	winscreen,
	losescreen
};

class Manager;

class GameState {

	public:
		GameState(Manager* refmanager);

		static State state;
		Manager* manager;
		bool escapepressed = false;

		void createstate();
		void removestate();
		void prevstate();

		void switchto(State newstate);
		void update();

	private:
		void createmenuselect();
		void creategame();
		void createcoopconnect();
		void createwinscreen();
		void createlosescreen();

		void removemenuselect();
		void removegame();
		void removecoopconnect();
		void removewinscreen();
		void removelosescreen();
};