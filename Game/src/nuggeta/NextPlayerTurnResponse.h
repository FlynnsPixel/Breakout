#ifndef _NEXTPLAYERTURNRESPONSE
#define _NEXTPLAYERTURNRESPONSE
#include "Message.h"
#include <cstring>
#include "NextPlayerTurnStatus.h"
#include "NextPlayerTurnResponse.h"
#include "Utils.h"
#include "NUtils.h"

class NextPlayerTurnResponse :public  Message {
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
        NextPlayerTurnStatus* _NextPlayerTurnStatus;
    protected:
        bool _NextPlayerTurnStatusSet;
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
        NextPlayerTurnStatus* getNextPlayerTurnStatus();
    public:
        void setNextPlayerTurnStatus(NextPlayerTurnStatus* value);
    public:
        bool isNextPlayerTurnStatusSet();
    public:
        void unSetNextPlayerTurnStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NextPlayerTurnResponse();
    public:
        virtual ~NextPlayerTurnResponse();
};
#endif // _NEXTPLAYERTURNRESPONSE