#ifndef _ASKFORFRIENDBYIDREQUEST
#define _ASKFORFRIENDBYIDREQUEST
#include "Message.h"
#include <cstring>
#include "AskForFriendByIdRequest.h"
#include "Utils.h"
#include "NUtils.h"

class AskForFriendByIdRequest :public  Message {
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
        const char* _Id;
    protected:
        bool _IdSet;
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
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AskForFriendByIdRequest();
    public:
        virtual ~AskForFriendByIdRequest();
};
#endif // _ASKFORFRIENDBYIDREQUEST