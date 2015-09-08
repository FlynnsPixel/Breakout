#ifndef _CONNECTIONREADYLISTENERCOLLECTION
#define _CONNECTIONREADYLISTENERCOLLECTION
#include "ConnectionReadyListener.h"
#include <vector>
#include <functional>
#include <algorithm>

class ConnectionReadyListenerCollection {
    private:
        std::vector<ConnectionReadyListener*>* connectionReadyListeners;
    public:
        void fireConnectionReady();
    public:
        std::vector<ConnectionReadyListener*>* getListeners();
    public:
        void add(ConnectionReadyListener* listener);
    public:
        void remove(ConnectionReadyListener* listener);
    public:
        ConnectionReadyListenerCollection();
    public:
        virtual ~ConnectionReadyListenerCollection();
};
#endif // _CONNECTIONREADYLISTENERCOLLECTION