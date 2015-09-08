#ifndef _T799
#define _T799
#include "ConnectionReadyListener.h"
#include <functional>
#include "ConnectionLostListener.h"
#include "ConnectionFailListener.h"
#include "ConnectionInvalidVersionDetectedListener.h"
#include "Message.h"

class T799 {
    public:
        virtual void _m16331()=0;
    public:
        virtual void _m16332()=0;
    public:
        virtual void _m16333(ConnectionReadyListener* connectionReadyListener)=0;
    public:
        virtual void _m16334(ConnectionReadyListener* _x10728)=0;
    public:
        virtual void _m16335(ConnectionLostListener* connectionLostListener)=0;
    public:
        virtual void _m16336(ConnectionLostListener* _n10730)=0;
    public:
        virtual void _m16337(ConnectionFailListener* connectionFailListener)=0;
    public:
        virtual void _m16338(ConnectionFailListener* _w10732)=0;
    public:
        virtual void _m16339(ConnectionInvalidVersionDetectedListener* connectionInvalidVersionDetectedListener)=0;
    public:
        virtual void _m16340(ConnectionInvalidVersionDetectedListener* _r10734)=0;
    public:
        virtual void _m16341(Message* _r10735)=0;
    public:
        virtual void _m16342(Message* _d10736, Message* _k10737)=0;
    public:
        virtual ~T799(){};
};
#endif // _T799