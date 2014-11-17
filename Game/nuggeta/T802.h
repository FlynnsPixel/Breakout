#ifndef _T802
#define _T802
#include "NLogger.h"
#include "T810.h"
#include <vector>
#include "MessageListener.h"
#include "Message.h"
#include "ConnectionInvalidVersionDetectedListenerCollection.h"
#include "ConnectionLostListenerCollection.h"
#include <functional>
#include "NLoggerFactory.h"
#include "T811.h"
#include "ByteBuffer.h"
#include "T813.h"
#include <cstring>
#include "T817.h"
#include "T816.h"
#include "NUtils.h"
#include "CppByteArray.h"
#include "MemoryManagement.h"
#include "T812.h"
#include <exception>
#include <sstream>
#include "T815.h"

class T802 {
    private:
        NLogger* _w14891;
    private:
        T810* _r6665;
    private:
        std::vector<unsigned char>* _v14893;
    private:
        int _w14894;
    private:
        MessageListener* _q6668;
    private:
        int _v14896;
    private:
        ConnectionInvalidVersionDetectedListenerCollection* _u6670;
    private:
        ConnectionLostListenerCollection* _t6671;
    public:
        T802(T810* _u14892, MessageListener* _k14895, ConnectionInvalidVersionDetectedListenerCollection* _i14897, ConnectionLostListenerCollection* _g14898);
    public:
        T811* _m16980(Message* msg);
    public:
        const char* _m16954(Message* _n14903);
    public:
        void _m16982(CppByteArray* _d14909);
    public:
        void _m16983(unsigned char _e14911);
    private:
         static const char* _m16981(const char* _v14918, int _b14919);
    public:
        void _m16952(const char* _f14922);
    public:
        virtual ~T802();
};
#endif // _T802