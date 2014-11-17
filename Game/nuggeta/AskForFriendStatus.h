#ifndef _ASKFORFRIENDSTATUS
#define _ASKFORFRIENDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "AskForFriendStatus.h"
#include <vector>
#include <cstring>

class AskForFriendStatus :public  Serializable {
    private:
         static std::vector<AskForFriendStatus*>* _values;
    public:
         static AskForFriendStatus* AUTHENTICATION_REQUIRED;
    public:
         static AskForFriendStatus* ALREADY_FRIENDS;
    public:
         static AskForFriendStatus* PLAYER_NOT_EXISTS;
    public:
         static AskForFriendStatus* HAVE_PENDING_INVITATION;
    public:
         static AskForFriendStatus* PENDING;
    public:
         static AskForFriendStatus* CANT_INVITE_YOURSELF;
    public:
         static AskForFriendStatus* INVALID_CALL;
    public:
         static AskForFriendStatus* INTERNAL_ERROR;
    public:
         static std::vector<AskForFriendStatus*>* values();
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
        AskForFriendStatus(const char* name, int value);
    public:
         static AskForFriendStatus* fromValue(int value);
    public:
         static AskForFriendStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~AskForFriendStatus();
};
#endif // _ASKFORFRIENDSTATUS