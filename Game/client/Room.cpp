#include "Client.h"

class Manager {

	public:
		static nuggeta::Client* client;
		static UIManager* uimanager;
};

namespace nuggeta {

	Manager* nuggeta::Client::manager;

	Client::Client(Manager* refmanager) {
		Client::manager = refmanager;
		currentSample = 0;
		logger = NLoggerFactory::getLogger("Client");
	}

	DWORD WINAPI loopcall(LPVOID lpParam) {
		while (true) {
			Client::manager->client->mainloop();
			Sleep(30);
		}
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
		samples.push_back(clientconnection);
	}

	void Client::runsample(NSampleProtocol* sample) {
		samples.push_back(sample);
	}

	void Client::mainloop() {
		if (currentSample != 0) {
			if (!currentSample->isFinished) {
				currentSample->mainLoop();
			}else {
				samples.erase(samples.begin());
				currentSample = 0;
			}
		}else {
			if (samples.size() > 0) {
				currentSample = samples.front();
				currentSample->init();
			}
		}

	}

	void Client::onquit() {
		currentSample->stop();
		currentSample = 0;
		TerminateThread(handle, 0);
	}
}