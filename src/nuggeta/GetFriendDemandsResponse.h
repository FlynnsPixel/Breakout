#ifndef _GETFRIENDDEMANDSRESPONSE
#define _GETFRIENDDEMANDSRESPONSE
#include "Message.h"
#include <cstring>
#include "GetFriendDemandsStatus.h"
#include "NFriendDemand.h"
#include <vector>
#include "GetFriendDemandsResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetFriendDemandsResponse :public  Message {
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
        GetFriendDemandsStatus* _GetFriendDemandsStatus;
    protected:
        bool _GetFriendDemandsStatusSet;
    protected:
        std::vector<NFriendDemand*>* _FriendDemands;
    protected:
        bool _FriendDemandsSet;
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
        GetFriendDemandsStatus* getGetFriendDemandsStatus();
    public:
        void setGetFriendDemandsStatus(GetFriendDemandsStatus* value);
    public:
        bool isGetFriendDemandsStatusSet();
    public:
        void unSetGetFriendDemandsStatus();
    public:
        std::vector<NFriendDemand*>* getFriendDemands();
    public:
        void setFriendDemands(std::vector<NFriendDemand*>* value);
    public:
        bool isFriendDemandsSet();
    public:
        void unSetFriendDemands();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetFriendDemandsResponse();
    public:
        virtual ~GetFriendDemandsResponse();
};
#endif // _GETFRIENDDEMANDSRESPONSE