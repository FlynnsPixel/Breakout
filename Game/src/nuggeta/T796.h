#ifndef _T796
#define _T796
#include "T804.h"
#include <cstring>
#include "NLoggerFactory.h"
#include "T799.h"
#include "ConnectionReadyListener.h"
#include "ConnectionLostListener.h"
#include "ConnectionFailListener.h"
#include "ConnectionInvalidVersionDetectedListener.h"

class T796 :public  T804 {
    public:
        T796(const char* name);
    public:
        //@Override
        void _m16901(T799* _v14015);
    private:
        void _m16902(T799* _a14016);
    public:
        //@Override
        void _m16903();
    public:
        virtual ~T796();
    public:
        //@Override
        void onConnectionReady0();
    public:
        //@Override
        void onConnectionLost1();
    public:
        //@Override
        void onConnectionFail2();
    public:
        //@Override
        void onInvalidVersionDetected3();
};
#endif // _T796