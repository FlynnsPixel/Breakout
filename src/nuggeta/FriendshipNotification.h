#ifndef _FRIENDSHIPNOTIFICATION
#define _FRIENDSHIPNOTIFICATION
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include "FriendshipNotification.h"
#include "Utils.h"
#include "NUtils.h"

class FriendshipNotification :public  Message {
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
        NPlayer* _Friend;
    protected:
        bool _FriendSet;
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
        bool isFriendSet();
    public:
        void unSetFriend();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        FriendshipNotification();
    public:
        virtual ~FriendshipNotification();
};
#endif // _FRIENDSHIPNOTIFICATION