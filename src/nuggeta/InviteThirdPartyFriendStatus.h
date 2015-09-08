#ifndef _INVITETHIRDPARTYFRIENDSTATUS
#define _INVITETHIRDPARTYFRIENDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "InviteThirdPartyFriendStatus.h"
#include <vector>
#include <cstring>

class InviteThirdPartyFriendStatus :public  Serializable {
    private:
         static std::vector<InviteThirdPartyFriendStatus*>* _values;
    public:
         static InviteThirdPartyFriendStatus* AUTHENTICATION_REQUIRED;
    public:
         static InviteThirdPartyFriendStatus* SUCCESS;
    public:
         static InviteThirdPartyFriendStatus* NOT_A_FRIEND;
    public:
         static InviteThirdPartyFriendStatus* INVALID_CALL;
    public:
         static InviteThirdPartyFriendStatus* INTERNAL_ERROR;
    public:
         static InviteThirdPartyFriendStatus* ALREADY_PENDING_INVITATION;
    public:
         static InviteThirdPartyFriendStatus* ALREADY_FRIENDS;
    public:
         static InviteThirdPartyFriendStatus* CANCELED;
    public:
         static std::vector<InviteThirdPartyFriendStatus*>* values();
    private:
        int _value;
    private:
        const char* _name;
    public:
        int getValue();
    public:
        const char* name();
    public:
        int ordinal();
    private:
        InviteThirdPartyFriendStatus(const char* name, int value);
    public:
         static InviteThirdPartyFriendStatus* fromValue(int value);
    public:
         static InviteThirdPartyFriendStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~InviteThirdPartyFriendStatus();
};
#endif // _INVITETHIRDPARTYFRIENDSTATUS