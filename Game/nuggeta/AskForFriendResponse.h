#ifndef _ASKFORFRIENDRESPONSE
#define _ASKFORFRIENDRESPONSE
#include "Message.h"
#include <cstring>
#include "AskForFriendStatus.h"
#include "AskForFriendResponse.h"
#include "Utils.h"
#include "NUtils.h"

class AskForFriendResponse :public  Message {
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
        AskForFriendStatus* _AskForFriendStatus;
    protected:
        bool _AskForFriendStatusSet;
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
        AskForFriendStatus* getAskForFriendStatus();
    public:
        void setAskForFriendStatus(AskForFriendStatus* value);
    public:
        bool isAskForFriendStatusSet();
    public:
        void unSetAskForFriendStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AskForFriendResponse();
    public:
        virtual ~AskForFriendResponse();
};
#endif // _ASKFORFRIENDRESPONSE