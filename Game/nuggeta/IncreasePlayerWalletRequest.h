#ifndef _INCREASEPLAYERWALLETREQUEST
#define _INCREASEPLAYERWALLETREQUEST
#include "Message.h"
#include <cstring>
#include "IncreasePlayerWalletRequest.h"
#include "Utils.h"
#include "NUtils.h"

class IncreasePlayerWalletRequest :public  Message {
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
        IncreasePlayerWalletRequest();
    public:
        virtual ~IncreasePlayerWalletRequest();
};
#endif // _INCREASEPLAYERWALLETREQUEST