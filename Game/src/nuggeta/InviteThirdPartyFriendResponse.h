#ifndef _INVITETHIRDPARTYFRIENDRESPONSE
#define _INVITETHIRDPARTYFRIENDRESPONSE
#include "Message.h"
#include <cstring>
#include "InviteThirdPartyFriendStatus.h"
#include "InviteThirdPartyFriendResponse.h"
#include "Utils.h"
#include "NUtils.h"

class InviteThirdPartyFriendResponse :public  Message {
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
        InviteThirdPartyFriendStatus* _InviteThirdPartyFriendStatus;
    protected:
        bool _InviteThirdPartyFriendStatusSet;
    protected:
        const char* _ThirdPartyId;
    protected:
        bool _ThirdPartyIdSet;
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
        InviteThirdPartyFriendStatus* getInviteThirdPartyFriendStatus();
    public:
        void setInviteThirdPartyFriendStatus(InviteThirdPartyFriendStatus* value);
    public:
        bool isInviteThirdPartyFriendStatusSet();
    public:
        void unSetInviteThirdPartyFriendStatus();
    public:
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isThirdPartyIdSet();
    public:
        void unSetThirdPartyId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        InviteThirdPartyFriendResponse();
    public:
        virtual ~InviteThirdPartyFriendResponse();
};
#endif // _INVITETHIRDPARTYFRIENDRESPONSE