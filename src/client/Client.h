#include "ClientConnection.h"
#include "NSampleProtocol.h"
#include "NSampleStorable.h"
#include "../ui/UIManager.h"

#pragma once

class Manager;

namespace nuggeta {

	class Client {

		public:
			Client(Manager* refmanager);
			static Manager* manager;
			HANDLE handle;
			ClientConnection* clientconnection;

			NLogger* logger;
			bool finished;

			void connect();
			void run();
			void mainloop();
			void onquit();
	};
}