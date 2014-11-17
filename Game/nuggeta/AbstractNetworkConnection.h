#ifndef _ABSTRACTNETWORKCONNECTION
#define _ABSTRACTNETWORKCONNECTION
#include "NUtils.h"
#include "T799.h"
#include "NLogger.h"
#include "T810.h"
#include "MessageListener.h"
#include "Message.h"
#include "NetConnectionSendFailHandler.h"
#include "NetConnectionLostHandler.h"
#include <cstring>
#include "ConnectionReadyListenerCollection.h"
#include "ConnectionFailListenerCollection.h"
#include "ConnectionLostListenerCollection.h"
#include "ConnectionInvalidVersionDetectedListenerCollection.h"
#include <functional>
#include "NLoggerFactory.h"
#include "ConnectionState.h"
#include "ConnectionReadyListener.h"
#include "ConnectionLostListener.h"
#include "ConnectionFailListener.h"
#include "ConnectionInvalidVersionDetectedListener.h"

class AbstractNetworkConnection :public  T799 {
    protected:
        NLogger* log;
    protected:
        T810* serializerFactory;
    protected:
        MessageListener* messageListener;
    protected:
        NetConnectionSendFailHandler* connectionSendFailHandler;
    protected:
        NetConnectionLostHandler* connectionLostHandler;
    protected:
        const char* name;
    protected:
        int connectionState;
    protected:
        ConnectionReadyListenerCollection* connectionReadyListenerCollection;
    protected:
        ConnectionFailListenerCollection* connectionFailListenerCollection;
    protected:
        ConnectionLostListenerCollection* connectionLostListenerCollection;
    protected:
        ConnectionInvalidVersionDetectedListenerCollection* connectionInvalidVersionDetectedListenerCollection;
    public:
        AbstractNetworkConnection(const char* name, T810* serializerFactory, MessageListener* messageListener);
    protected:
        virtual void tryStop();
    public:
        //@Override
        void _m16333(ConnectionReadyListener* connectionReadyListener);
    public:
        //@Override
        void _m16334(ConnectionReadyListener* _b15249);
    public:
        //@Override
        void _m16335(ConnectionLostListener* connectionLostListener);
    public:
        //@Override
        void _m16336(ConnectionLostListener* _k15251);
    public:
        //@Override
        void _m16337(ConnectionFailListener* connectionFailListener);
    public:
        //@Override
        void _m16338(ConnectionFailListener* _b15253);
    public:
        //@Override
        void _m16339(ConnectionInvalidVersionDetectedListener* connectionInvalidVersionDetectedListener);
    public:
        //@Override
        void _m16340(ConnectionInvalidVersionDetectedListener* _s15255);
    public:
        virtual //@Override
        void _m16331();
    public:
        virtual //@Override
        void _m16332();
    public:
        virtual //@Override
        void _m16341(Message* _n15256);
    public:
        virtual //@Override
        void _m16342(Message* _h15257, Message* _m15258);
    public:
        virtual ~AbstractNetworkConnection();
    public:
        //@Override
        void onConnectionLost4();
    public:
        //@Override
        void onFail5();
};
#endif // _ABSTRACTNETWORKCONNECTION