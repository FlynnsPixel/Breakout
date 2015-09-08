#ifndef _T803
#define _T803
#include "NUtils.h"
#include "AbstractNetworkConnection.h"
#include <cstring>
#include "T802.h"
#include "T810.h"
#include "MessageListener.h"
#include "Message.h"
#include <functional>
#include "NLoggerFactory.h"
#include "ConnectionState.h"
#include "NHttpRequest.h"
#include "NHttpRequestImpl.h"
#include "NetConnectionReceivedHandler.h"
#include "NetConnectionSendFailHandler.h"
#include "NSystem.h"
#include "T803.h"
#include <exception>

class T803 :public  AbstractNetworkConnection {
    private:
        const char* _v6495;
    private:
        const char* _i14635;
    protected:
        bool _e14636;
    private:
         static const char* _p14637;
    private:
        T802* _f14638;
    public:
        T803(const char* name, T810* serializerFactory, MessageListener* messageListener, const char* _h14634);
    public:
        //@Override
        void _m16331();
    private:
        void _m16950();
    public:
        //@Override
        void _m16332();
    protected:
        //@Override
        void tryStop();
    public:
        //@Override
        void _m16341(Message* msg);
    public:
        //@Override
        void _m16342(Message* _c14651, Message* _m14652);
    private:
        void _m16953(Message* _e14653);
    public:
        virtual ~T803();
    public:
        //@Override
        void onData28(unsigned char _p14641);
    public:
        //@Override
        void onFail29();
    public:
        //@Override
        void onData30(unsigned char _w14646);
    public:
        //@Override
        void onFail31();
    public:
        //@Override
        void onData32(unsigned char _i14656);
    public:
        //@Override
        void onFail33();
};
#endif // _T803