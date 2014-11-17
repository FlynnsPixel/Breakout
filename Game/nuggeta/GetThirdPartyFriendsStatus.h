#ifndef _GETTHIRDPARTYFRIENDSSTATUS
#define _GETTHIRDPARTYFRIENDSSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetThirdPartyFriendsStatus.h"
#include <vector>
#include <cstring>

class GetThirdPartyFriendsStatus :public  Serializable {
    private:
         static std::vector<GetThirdPartyFriendsStatus*>* _values;
    public:
         static GetThirdPartyFriendsStatus* AUTHENTICATION_REQUIRED;
    public:
         static GetThirdPartyFriendsStatus* SUCCESS;
    public:
         static GetThirdPartyFriendsStatus* NO_THIRD_PARTY_SOURCE_ATTACHED;
    public:
         static GetThirdPartyFriendsStatus* INTERNAL_ERROR;
    public:
         static GetThirdPartyFriendsStatus* INVALID_CALL;
    public:
         static GetThirdPartyFriendsStatus* CANCELED;
    public:
         static std::vector<GetThirdPartyFriendsStatus*>* values();
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
        GetThirdPartyFriendsStatus(const char* name, int value);
    public:
         static GetThirdPartyFriendsStatus* fromValue(int value);
    public:
         static GetThirdPartyFriendsStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetThirdPartyFriendsStatus();
};
#endif // _GETTHIRDPARTYFRIENDSSTATUS