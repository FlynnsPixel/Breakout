#ifndef _CONNECTIONLOSTLISTENERCOLLECTION
#define _CONNECTIONLOSTLISTENERCOLLECTION
#include "ConnectionLostListener.h"
#include <vector>
#include <functional>
#include <algorithm>

class ConnectionLostListenerCollection {
    private:
        std::vector<ConnectionLostListener*>* connectionLostListeners;
    public:
        void fireConnectionLost();
    public:
        std::vector<ConnectionLostListener*>* getListeners();
    public:
        void add(ConnectionLostListener* listener);
    public:
        void remove(ConnectionLostListener* listener);
    public:
        ConnectionLostListenerCollection();
    public:
        virtual ~ConnectionLostListenerCollection();
};
#endif // _CONNECTIONLOSTLISTENERCOLLECTION