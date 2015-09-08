#ifndef _T795
#define _T795
#include "T799.h"
#include <vector>
#include "ConnectionReadyListenerCollection.h"
#include "ConnectionLostListenerCollection.h"
#include "ConnectionFailListenerCollection.h"
#include "ConnectionInvalidVersionDetectedListenerCollection.h"
#include "NLogger.h"
#include "ConnectionReadyListener.h"
#include "ConnectionLostListener.h"
#include "ConnectionFailListener.h"
#include "ConnectionInvalidVersionDetectedListener.h"
#include "MessageListener.h"
#include "Message.h"
#include <functional>
#include "NLoggerFactory.h"
#include "MemoryManagement.h"

class T795 :public  T799 {
    private:
        std::vector<T799*>* _k14662;
    private:
        T799* _s14663;
    private:
        ConnectionReadyListenerCollection* _d14664;
    private:
        ConnectionLostListenerCollection* _k14665;
    private:
        ConnectionFailListenerCollection* _x14666;
    private:
        ConnectionInvalidVersionDetectedListenerCollection* _l14667;
    private:
        NLogger* _b14668;
    private:
        ConnectionReadyListener* _t14669;
    private:
        ConnectionLostListener* _t14670;
    private:
        ConnectionFailListener* _f14671;
    private:
        ConnectionInvalidVersionDetectedListener* _m14672;
    private:

        MessageListener* _d6527;
    public:
        T795(MessageListener* _w14673);
    public:
        //@Override
        void _m16331();
    private:
        void _m16955();
    public:
        //@Override
        void _m16332();
    public:
        //@Override
        void _m16341(Message* _i14675);
    public:
        void _m16327(T799* _e14676);
    public:
        //@Override
        void _m16333(ConnectionReadyListener* connectionReadyListener);
    public:
        //@Override
        void _m16335(ConnectionLostListener* connectionLostListener);
    public:
        //@Override
        void _m16337(ConnectionFailListener* connectionFailListener);
    public:
        //@Override
        void _m16339(ConnectionInvalidVersionDetectedListener* connectionInvalidVersionDetectedListener);
    public:
        //@Override
        void _m16340(ConnectionInvalidVersionDetectedListener* _t14681);
    public:
        //@Override
        void _m16334(ConnectionReadyListener* _b14682);
    public:
        //@Override
        void _m16336(ConnectionLostListener* _d14683);
    public:
        //@Override
        void _m16338(ConnectionFailListener* _l14684);
    public:
        //@Override
        void _m16342(Message* _r14685, Message* _c14686);
    public:
        virtual ~T795();
    public:
        //@Override
        void onConnectionReady6();
    public:
        //@Override
        void onConnectionLost7();
    public:
        //@Override
        void onConnectionFail8();
    public:
        void onInvalidVersionDetected9();
};
#endif // _T795