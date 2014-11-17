#ifndef _CONNECTIONFAILLISTENERCOLLECTION
#define _CONNECTIONFAILLISTENERCOLLECTION
#include "ConnectionFailListener.h"
#include <vector>
#include <functional>
#include <algorithm>

class ConnectionFailListenerCollection {
    private:
        std::vector<ConnectionFailListener*>* connectionFailListeners;
    public:
        void fireConnectionFail();
    public:
        std::vector<ConnectionFailListener*>* getListeners();
    public:
        void add(ConnectionFailListener* listener);
    public:
        void remove(ConnectionFailListener* listener);
    public:
        ConnectionFailListenerCollection();
    public:
        virtual ~ConnectionFailListenerCollection();
};
#endif // _CONNECTIONFAILLISTENERCOLLECTION