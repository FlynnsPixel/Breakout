#ifndef _INVITETHIRDPARTYFRIENDNOTIFICATION
#define _INVITETHIRDPARTYFRIENDNOTIFICATION
#include "Message.h"
#include <cstring>
#include "ExecutionStatus.h"
#include "InviteThirdPartyFriendNotification.h"
#include "Utils.h"
#include "NUtils.h"

class InviteThirdPartyFriendNotification :public  Message {
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
        const char* _thirdPartyId;
    protected:
        bool _thirdPartyIdSet;
    protected:
        ExecutionStatus* _ExecutionStatus;
    protected:
        bool _ExecutionStatusSet;
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
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isthirdPartyIdSet();
    public:
        void unSetthirdPartyId();
    public:
        ExecutionStatus* getExecutionStatus();
    public:
        void setExecutionStatus(ExecutionStatus* value);
    public:
        bool isExecutionStatusSet();
    public:
        void unSetExecutionStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        InviteThirdPartyFriendNotification();
    public:
        virtual ~InviteThirdPartyFriendNotification();
};
#endif // _INVITETHIRDPARTYFRIENDNOTIFICATION