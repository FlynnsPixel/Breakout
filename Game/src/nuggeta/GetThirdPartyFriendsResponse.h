#ifndef _GETTHIRDPARTYFRIENDSRESPONSE
#define _GETTHIRDPARTYFRIENDSRESPONSE
#include "Message.h"
#include <cstring>
#include "GetThirdPartyFriendsStatus.h"
#include "NPlayer.h"
#include <vector>
#include "GetThirdPartyFriendsResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetThirdPartyFriendsResponse :public  Message {
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
        GetThirdPartyFriendsStatus* _GetThirdPartyFriendsStatus;
    protected:
        bool _GetThirdPartyFriendsStatusSet;
    protected:
        std::vector<NPlayer*>* _ThirdPartyFriends;
    protected:
        bool _ThirdPartyFriendsSet;
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
        GetThirdPartyFriendsStatus* getGetThirdPartyFriendsStatus();
    public:
        void setGetThirdPartyFriendsStatus(GetThirdPartyFriendsStatus* value);
    public:
        bool isGetThirdPartyFriendsStatusSet();
    public:
        void unSetGetThirdPartyFriendsStatus();
    public:
        std::vector<NPlayer*>* getThirdPartyFriends();
    public:
        void setThirdPartyFriends(std::vector<NPlayer*>* value);
    public:
        bool isThirdPartyFriendsSet();
    public:
        void unSetThirdPartyFriends();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetThirdPartyFriendsResponse();
    public:
        virtual ~GetThirdPartyFriendsResponse();
};
#endif // _GETTHIRDPARTYFRIENDSRESPONSE