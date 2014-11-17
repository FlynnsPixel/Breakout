#ifndef _CONNECTIONINVALIDVERSIONDETECTEDLISTENERCOLLECTION
#define _CONNECTIONINVALIDVERSIONDETECTEDLISTENERCOLLECTION
#include "ConnectionInvalidVersionDetectedListener.h"
#include <vector>
#include <functional>
#include <algorithm>

class ConnectionInvalidVersionDetectedListenerCollection {
    private:
        std::vector<ConnectionInvalidVersionDetectedListener*>* connectionInvalidVersionDetectedListeners;
    public:
        void fireInvalidVersionDetected();
    public:
        std::vector<ConnectionInvalidVersionDetectedListener*>* getListeners();
    public:
        void add(ConnectionInvalidVersionDetectedListener* listener);
    public:
        void remove(ConnectionInvalidVersionDetectedListener* listener);
    public:
        ConnectionInvalidVersionDetectedListenerCollection();
    public:
        virtual ~ConnectionInvalidVersionDetectedListenerCollection();
};
#endif // _CONNECTIONINVALIDVERSIONDETECTEDLISTENERCOLLECTION