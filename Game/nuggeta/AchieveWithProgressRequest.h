#ifndef _ACHIEVEWITHPROGRESSREQUEST
#define _ACHIEVEWITHPROGRESSREQUEST
#include "Message.h"
#include <cstring>
#include "AchieveWithProgressRequest.h"
#include "Utils.h"
#include "NUtils.h"

class AchieveWithProgressRequest :public  Message {
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
    protected:
        int _Value;
    protected:
        bool _ValueSet;
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
        int getValue();
    public:
        void setValue(int value);
    public:
        bool isValueSet();
    public:
        void unSetValue();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AchieveWithProgressRequest();
    public:
        virtual ~AchieveWithProgressRequest();
};
#endif // _ACHIEVEWITHPROGRESSREQUEST