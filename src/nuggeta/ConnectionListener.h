#ifndef _CONNECTIONLISTENER
#define _CONNECTIONLISTENER
#include <cstring>

class ConnectionListener {
    public:
        virtual void onConnectionReady(const char* listenerId)=0;
    public:
        virtual void onConnectionFail(const char* listenerId)=0;
    public:
        virtual void onConnectionLost(const char* listenerId)=0;
    public:
        virtual void onInvalidVersionDetected(const char* listenerId)=0;
    public:
        virtual ~ConnectionListener(){};
};
#endif // _CONNECTIONLISTENER