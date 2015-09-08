#ifndef _GETFRIENDSSTATUS
#define _GETFRIENDSSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetFriendsStatus.h"
#include <vector>
#include <cstring>

class GetFriendsStatus :public  Serializable {
    private:
         static std::vector<GetFriendsStatus*>* _values;
    public:
         static GetFriendsStatus* AUTHENTICATION_REQUIRED;
    public:
         static GetFriendsStatus* SUCCESS;
    public:
         static GetFriendsStatus* INVALID_CALL;
    public:
         static GetFriendsStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetFriendsStatus*>* values();
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
        GetFriendsStatus(const char* name, int value);
    public:
         static GetFriendsStatus* fromValue(int value);
    public:
         static GetFriendsStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetFriendsStatus();
};
#endif // _GETFRIENDSSTATUS