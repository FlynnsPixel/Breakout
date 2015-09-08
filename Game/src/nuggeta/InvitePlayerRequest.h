#ifndef _INVITEPLAYERREQUEST
#define _INVITEPLAYERREQUEST
#include "Message.h"
#include <cstring>
#include "NInvitation.h"
#include "InvitePlayerRequest.h"
#include "Utils.h"
#include "NUtils.h"

class InvitePlayerRequest :public  Message {
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
        const char* _PlayerId;
    protected:
        bool _PlayerIdSet;
    protected:
        Message* _InvitationContent;
    protected:
        bool _InvitationContentSet;
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
        const char* getPlayerId();
    public:
        void setPlayerId(const char* value);
    public:
        bool isPlayerIdSet();
    public:
        void unSetPlayerId();
    public:
        Message* getInvitationContent();
    public:
        void setInvitationContent(Message* value);
    public:
        bool isInvitationContentSet();
    public:
        void unSetInvitationContent();
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
        InvitePlayerRequest();
    public:
        virtual ~InvitePlayerRequest();
};
#endif // _INVITEPLAYERREQUEST