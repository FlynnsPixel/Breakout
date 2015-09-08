#ifndef _SESSIONEXPIRED
#define _SESSIONEXPIRED
#include "Message.h"
#include <cstring>
#include "SessionExpired.h"
#include "Utils.h"
#include "NUtils.h"

class SessionExpired :public  Message {
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
        const char* _sessionId;
    protected:
        bool _sessionIdSet;
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
        const char* getSessionId();
    public:
        void setSessionId(const char* value);
    public:
        bool issessionIdSet();
    public:
        void unSetsessionId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SessionExpired();
    public:
        virtual ~SessionExpired();
};
#endif // _SESSIONEXPIRED