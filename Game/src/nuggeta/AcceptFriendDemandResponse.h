#ifndef _ACCEPTFRIENDDEMANDRESPONSE
#define _ACCEPTFRIENDDEMANDRESPONSE
#include "Message.h"
#include <cstring>
#include "AcceptFriendDemandStatus.h"
#include "AcceptFriendDemandResponse.h"
#include "Utils.h"
#include "NUtils.h"

class AcceptFriendDemandResponse :public  Message {
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
        AcceptFriendDemandStatus* _AcceptFriendDemandStatus;
    protected:
        bool _AcceptFriendDemandStatusSet;
    protected:
        const char* _FriendDemandId;
    protected:
        bool _FriendDemandIdSet;
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
        AcceptFriendDemandStatus* getAcceptFriendDemandStatus();
    public:
        void setAcceptFriendDemandStatus(AcceptFriendDemandStatus* value);
    public:
        bool isAcceptFriendDemandStatusSet();
    public:
        void unSetAcceptFriendDemandStatus();
    public:
        const char* getFriendDemandId();
    public:
        void setFriendDemandId(const char* value);
    public:
        bool isFriendDemandIdSet();
    public:
        void unSetFriendDemandId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AcceptFriendDemandResponse();
    public:
        virtual ~AcceptFriendDemandResponse();
};
#endif // _ACCEPTFRIENDDEMANDRESPONSE