#ifndef _INVITATIONREQUESTNOTIFICATION
#define _INVITATIONREQUESTNOTIFICATION
#include "Message.h"
#include <cstring>
#include "NInvitation.h"
#include "InvitationRequestNotification.h"
#include "Utils.h"
#include "NUtils.h"

class InvitationRequestNotification :public  Message {
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
        NInvitation* _Invitation;
    protected:
        bool _InvitationSet;
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
        NInvitation* getInvitation();
    public:
        void setInvitation(NInvitation* value);
    public:
        bool isInvitationSet();
    public:
        void unSetInvitation();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        InvitationRequestNotification();
    public:
        virtual ~InvitationRequestNotification();
};
#endif // _INVITATIONREQUESTNOTIFICATION