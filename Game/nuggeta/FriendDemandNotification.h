#ifndef _FRIENDDEMANDNOTIFICATION
#define _FRIENDDEMANDNOTIFICATION
#include "Message.h"
#include <cstring>
#include "NFriendDemand.h"
#include "FriendDemandNotification.h"
#include "Utils.h"
#include "NUtils.h"

class FriendDemandNotification :public  Message {
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
        NFriendDemand* _FriendDemand;
    protected:
        bool _FriendDemandSet;
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
        NFriendDemand* getFriendDemand();
    public:
        void setFriendDemand(NFriendDemand* value);
    public:
        bool isFriendDemandSet();
    public:
        void unSetFriendDemand();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        FriendDemandNotification();
    public:
        virtual ~FriendDemandNotification();
};
#endif // _FRIENDDEMANDNOTIFICATION