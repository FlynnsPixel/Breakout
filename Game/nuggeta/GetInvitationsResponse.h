#ifndef _GETINVITATIONSRESPONSE
#define _GETINVITATIONSRESPONSE
#include "Message.h"
#include <cstring>
#include "GetInvitationsStatus.h"
#include "NInvitation.h"
#include <vector>
#include "GetInvitationsResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetInvitationsResponse :public  Message {
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
        GetInvitationsStatus* _GetInvitationsStatus;
    protected:
        bool _GetInvitationsStatusSet;
    protected:
        std::vector<NInvitation*>* _Invitations;
    protected:
        bool _InvitationsSet;
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
        GetInvitationsStatus* getGetInvitationsStatus();
    public:
        void setGetInvitationsStatus(GetInvitationsStatus* value);
    public:
        bool isGetInvitationsStatusSet();
    public:
        void unSetGetInvitationsStatus();
    public:
        std::vector<NInvitation*>* getInvitations();
    public:
        void setInvitations(std::vector<NInvitation*>* value);
    public:
        bool isInvitationsSet();
    public:
        void unSetInvitations();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetInvitationsResponse();
    public:
        virtual ~GetInvitationsResponse();
};
#endif // _GETINVITATIONSRESPONSE