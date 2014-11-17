#ifndef _NINVITATION
#define _NINVITATION
#include "Storable.h"
#include <cstring>
#include "NPlayer.h"
#include "Message.h"
#include "NInvitationStatus.h"
#include "NInvitation.h"
#include "Utils.h"
#include "NUtils.h"

class NInvitation :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _StoreId;
    protected:
        bool _StoreIdSet;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    protected:
        NPlayer* _Inviter;
    protected:
        bool _InviterSet;
    protected:
        NPlayer* _Invitee;
    protected:
        bool _InviteeSet;
    protected:
        Message* _Content;
    protected:
        bool _ContentSet;
    protected:
        NInvitationStatus* _Status;
    protected:
        bool _StatusSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isStoreIdSet();
    public:
        void unSetStoreId();
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        NPlayer* getInviter();
    public:
        void setInviter(NPlayer* value);
    public:
        bool isInviterSet();
    public:
        void unSetInviter();
    public:
        NPlayer* getInvitee();
    public:
        void setInvitee(NPlayer* value);
    public:
        bool isInviteeSet();
    public:
        void unSetInvitee();
    public:
        Message* getContent();
    public:
        void setContent(Message* value);
    public:
        bool isContentSet();
    public:
        void unSetContent();
    public:
        NInvitationStatus* getStatus();
    public:
        void setStatus(NInvitationStatus* value);
    public:
        bool isStatusSet();
    public:
        void unSetStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NInvitation();
    public:
        virtual ~NInvitation();
};
#endif // _NINVITATION