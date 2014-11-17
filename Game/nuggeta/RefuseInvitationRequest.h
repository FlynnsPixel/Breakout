#ifndef _REFUSEINVITATIONREQUEST
#define _REFUSEINVITATIONREQUEST
#include "Message.h"
#include <cstring>
#include "RefuseInvitationRequest.h"
#include "Utils.h"
#include "NUtils.h"

class RefuseInvitationRequest :public  Message {
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
        RefuseInvitationRequest();
    public:
        virtual ~RefuseInvitationRequest();
};
#endif // _REFUSEINVITATIONREQUEST