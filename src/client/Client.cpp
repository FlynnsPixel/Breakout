#include "Client.h"

class Manager {

	public:
		static nuggeta::Client* client;
		static UIManager* uimanager;
};

BOOL WINAPI CloseHandle(HANDLE hObject);

namespace nuggeta {

	Manager* nuggeta::Client::manager;

	Client::Client(Manager* refmanager) {
		Client::manager = refmanager;
		logger = NLoggerFactory::getLogger("Client");
	}

	DWORD WINAPI loopcall(LPVOID lpParam) {
		while (!Client::manager->client->finished) {
			Client::manager->client->mainloop();
			Sleep(30);
		}
		return NULL;
	}

	void Client::connect() {
		run();

		handle = CreateThread(
			NULL,                   // default security attributes
			0,                      // use default stack size
			loopcall,       // thread function name
			NULL,          // argument to thread function
			0,                      // use default creation flags
			NULL);   // ret
	}

	void Client::run() {
		finished = false;
		logger->info("Starting Nuggeta C++...");
		Client::manager->uimanager->infotext->textupdate("establishing connection with nuggeta...");

		clientconnection = new ClientConnection();
		clientconnection->manager = Client::manager;
		clientconnection->init();
	}

	void Client::mainloop() {
		if (clientconnection != NULL) {
			clientconnection->mainLoop();
		}
	}

	void Client::onquit() {
		handle = NULL;
		if (clientconnection != NULL) {
			clientconnection->stop();
		}
		finished = true;
		WaitForSingleObject(handle, INFINITE);
		CloseHandle(handle);
		delete clientconnection;
	}
}