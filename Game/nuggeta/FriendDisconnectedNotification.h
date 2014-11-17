#ifndef _FRIENDDISCONNECTEDNOTIFICATION
#define _FRIENDDISCONNECTEDNOTIFICATION
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include "FriendDisconnectedNotification.h"
#include "Utils.h"
#include "NUtils.h"

class FriendDisconnectedNotification :public  Message {
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
        NPlayer* _friend;
    protected:
        bool _friendSet;
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
        NPlayer* getFriend();
    public:
        void setFriend(NPlayer* value);
    public:
        bool isfriendSet();
    public:
        void unSetfriend();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        FriendDisconnectedNotification();
    public:
        virtual ~FriendDisconnectedNotification();
};
#endif // _FRIENDDISCONNECTEDNOTIFICATION