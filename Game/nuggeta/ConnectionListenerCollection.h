#ifndef _CONNECTIONLISTENERCOLLECTION
#define _CONNECTIONLISTENERCOLLECTION
#include "ConnectionListener.h"
#include <vector>
#include <algorithm>

class ConnectionListenerCollection {
    private:
        std::vector<ConnectionListener*>* listeners;
    public:
        void fireConnectionReady();
    public:
        void fireConnectionFail();
    public:
        void fireConnectionLost();
    public:
        void fireInvalidVersionDetected();
    public:
        void add(ConnectionListener* _j13963);
    public:
        void remove(ConnectionListener* _y13969);
    public:
        std::vector<ConnectionListener*>* getListeners();
    public:
        ConnectionListenerCollection();
    public:
        virtual ~ConnectionListenerCollection();
};
#endif // _CONNECTIONLISTENERCOLLECTION