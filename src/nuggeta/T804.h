#ifndef _T804
#define _T804
#include "NUtils.h"
#include "NLogger.h"
#include "T799.h"
#include "ConnectionReadyListenerCollection.h"
#include "ConnectionLostListenerCollection.h"
#include "ConnectionFailListenerCollection.h"
#include "ConnectionInvalidVersionDetectedListenerCollection.h"
#include <cstring>
#include "Message.h"
#include "ConnectionReadyListener.h"
#include <functional>
#include "ConnectionLostListener.h"
#include "ConnectionFailListener.h"
#include "ConnectionInvalidVersionDetectedListener.h"

class T804 {
    protected:
        NLogger* _b14044;
    protected:
        T799* _k14045;
    protected:
        ConnectionReadyListenerCollection* _l14046;
    protected:
        ConnectionLostListenerCollection* _l14047;
    protected:
        ConnectionFailListenerCollection* _m14048;
    protected:
        ConnectionInvalidVersionDetectedListenerCollection* _o14049;
    protected:
        const char* _c5971;
    private:
        bool _x14051;
    public:
        T804(const char* _s14050);
    public:
        virtual void _m16901(T799* _k14052);
    public:
        void _m16905(Message* _y14053);
    public:
        void _m16906(ConnectionReadyListener* listener);
    public:
        void _m16907(ConnectionReadyListener* listener);
    public:
        void _m16908(ConnectionLostListener* listener);
    public:
        void _m16909(ConnectionLostListener* listener);
    public:
        void _m16910(ConnectionFailListener* _q14054);
    public:
        void _m16911(ConnectionFailListener* listener);
    public:
        void _m16912(ConnectionInvalidVersionDetectedListener* _k14055);
    public:
        void _m16913(ConnectionInvalidVersionDetectedListener* _p14061);
    public:
        virtual void _m16903();
    public:
        bool _m16914();
    public:
        T799* _m16915();
    public:
        void _m16916(Message* _n14062, Message* _y14063);
    public:
        virtual ~T804();
};
#endif // _T804