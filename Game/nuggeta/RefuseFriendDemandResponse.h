#ifndef _REFUSEFRIENDDEMANDRESPONSE
#define _REFUSEFRIENDDEMANDRESPONSE
#include "Message.h"
#include <cstring>
#include "RefuseFriendDemandStatus.h"
#include "RefuseFriendDemandResponse.h"
#include "Utils.h"
#include "NUtils.h"

class RefuseFriendDemandResponse :public  Message {
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
        RefuseFriendDemandStatus* _RefuseFriendDemandStatus;
    protected:
        bool _RefuseFriendDemandStatusSet;
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
        RefuseFriendDemandStatus* getRefuseFriendDemandStatus();
    public:
        void setRefuseFriendDemandStatus(RefuseFriendDemandStatus* value);
    public:
        bool isRefuseFriendDemandStatusSet();
    public:
        void unSetRefuseFriendDemandStatus();
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
        RefuseFriendDemandResponse();
    public:
        virtual ~RefuseFriendDemandResponse();
};
#endif // _REFUSEFRIENDDEMANDRESPONSE