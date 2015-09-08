#ifndef _GAMEMESSAGEERROR
#define _GAMEMESSAGEERROR
#include "Message.h"
#include <cstring>
#include "GameMessageError.h"
#include "Utils.h"
#include "NUtils.h"

class GameMessageError :public  Message {
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
        const char* _Reason;
    protected:
        bool _ReasonSet;
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
        const char* getReason();
    public:
        void setReason(const char* value);
    public:
        bool isReasonSet();
    public:
        void unSetReason();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GameMessageError();
    public:
        virtual ~GameMessageError();
};
#endif // _GAMEMESSAGEERROR