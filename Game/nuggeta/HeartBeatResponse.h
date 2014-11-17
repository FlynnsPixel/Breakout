#ifndef _HEARTBEATRESPONSE
#define _HEARTBEATRESPONSE
#include "Message.h"
#include <cstring>
#include "HeartBeatResponse.h"
#include "Utils.h"
#include "NUtils.h"

class HeartBeatResponse :public  Message {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        int _Counter;
    protected:
        bool _CounterSet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getRequestId();
    public:
        void setRequestId(const char* value);
    public:
        bool isRequestIdSet();
    public:
        void unSetRequestId();
    public:
        int getCounter();
    public:
        void setCounter(int value);
    public:
        bool isCounterSet();
    public:
        void unSetCounter();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        HeartBeatResponse();
    public:
        virtual ~HeartBeatResponse();
};
#endif // _HEARTBEATRESPONSE