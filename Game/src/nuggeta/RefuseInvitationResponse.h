#ifndef _REFUSEINVITATIONRESPONSE
#define _REFUSEINVITATIONRESPONSE
#include "Message.h"
#include <cstring>
#include "RefuseInvitationStatus.h"
#include "RefuseInvitationResponse.h"
#include "Utils.h"
#include "NUtils.h"

class RefuseInvitationResponse :public  Message {
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
        RefuseInvitationStatus* _RefuseInvitationStatus;
    protected:
        bool _RefuseInvitationStatusSet;
    protected:
        const char* _InvitationId;
    protected:
        bool _InvitationIdSet;
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
        RefuseInvitationStatus* getRefuseInvitationStatus();
    public:
        void setRefuseInvitationStatus(RefuseInvitationStatus* value);
    public:
        bool isRefuseInvitationStatusSet();
    public:
        void unSetRefuseInvitationStatus();
    public:
        const char* getInvitationId();
    public:
        void setInvitationId(const char* value);
    public:
        bool isInvitationIdSet();
    public:
        void unSetInvitationId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        RefuseInvitationResponse();
    public:
        virtual ~RefuseInvitationResponse();
};
#endif // _REFUSEINVITATIONRESPONSE