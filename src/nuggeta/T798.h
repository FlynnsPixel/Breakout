#ifndef _T798
#define _T798
#include "NUtils.h"
#include "T797.h"
#include "NLogger.h"
#include <cstring>
#include "NLoggerFactory.h"
#include "T799.h"
#include "MessageListener.h"
#include "Message.h"
#include <functional>
#include <sstream>
#include "T795.h"
#include "T810.h"
#include "T818.h"
#include "T819.h"
#include "T805.h"
#include "T803.h"

class T798 :public  T797 {
        NLogger* _g10367;
    private:
        const char* _n3127;
    private:
        const char* _f3128;
    public:
        T798(const char* _l10368, const char* _k10369);
    public:
        //@Override
        T799* _m16326(const char* _m10370, MessageListener* _f10371, const char* _h10372);
    public:
        virtual ~T798();
};
#endif // _T798