#ifndef _T805
#define _T805
#include "NUtils.h"
#include "AbstractNetworkConnection.h"
#include "NSocket.h"
#include "T802.h"
#include <cstring>
#include "NetConnectionReceivedHandler.h"
#include "Message.h"
#include "T810.h"
#include "MessageListener.h"
#include <functional>
#include "NLoggerFactory.h"
#include "ConnectionState.h"
#include "NetConnectionFailHandler.h"
#include "NetConnectionOpenedHandler.h"
#include "NSocketImpl.h"
#include <exception>
#include "T811.h"
#include "MemoryManagement.h"
#include "NetConnectionDrainHandler.h"

class T805 :public  AbstractNetworkConnection {
    private:
        NSocket* socket;
    private:
        T802* network;
    private:
        const char* server;
    private:
        int port;
    private:
        const char* wsUrl;
    private:
        NetConnectionReceivedHandler* connectionReceivedHandler;
    private:
        Message* _response;
    public:
        T805(const char* name, T810* serializerFactory, MessageListener* messageListener, const char* host, int hostPort, const char* url);
    public:
        //@Override
        void _m16331();
    public:
        void _m16341(Message* msg);
    private:
        void _m17029(Message* msg);
    public:
        void _m16342(Message* msg, Message* resp);
    public:
        void _m16332();
    protected:
        //@Override
        void tryStop();
    public:
        virtual ~T805();
    public:
        //@Override
        void onData10(unsigned char data);
    public:
        //@Override
        void onConnectionFail11();
    public:
        //@Override
        void onConnectionOpened12();
    public:
        //@Override
        void onDrain13();
};
#endif // _T805