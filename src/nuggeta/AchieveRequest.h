#ifndef _ACHIEVEREQUEST
#define _ACHIEVEREQUEST
#include "Message.h"
#include <cstring>
#include "AchieveRequest.h"
#include "Utils.h"
#include "NUtils.h"

class AchieveRequest :public  Message {
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
        const char* _AchivementId;
    protected:
        bool _AchivementIdSet;
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
        const char* getAchivementId();
    public:
        void setAchivementId(const char* value);
    public:
        bool isAchivementIdSet();
    public:
        void unSetAchivementId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AchieveRequest();
    public:
        virtual ~AchieveRequest();
};
#endif // _ACHIEVEREQUEST