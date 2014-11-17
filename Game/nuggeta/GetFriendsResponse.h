#ifndef _GETFRIENDSRESPONSE
#define _GETFRIENDSRESPONSE
#include "Message.h"
#include <cstring>
#include "GetFriendsStatus.h"
#include "NPlayer.h"
#include <vector>
#include "GetFriendsResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetFriendsResponse :public  Message {
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
        GetFriendsStatus* _GetFriendsStatus;
    protected:
        bool _GetFriendsStatusSet;
    protected:
        std::vector<NPlayer*>* _Friends;
    protected:
        bool _FriendsSet;
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
        GetFriendsStatus* getGetFriendsStatus();
    public:
        void setGetFriendsStatus(GetFriendsStatus* value);
    public:
        bool isGetFriendsStatusSet();
    public:
        void unSetGetFriendsStatus();
    public:
        std::vector<NPlayer*>* getFriends();
    public:
        void setFriends(std::vector<NPlayer*>* value);
    public:
        bool isFriendsSet();
    public:
        void unSetFriends();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetFriendsResponse();
    public:
        virtual ~GetFriendsResponse();
};
#endif // _GETFRIENDSRESPONSE