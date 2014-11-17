#ifndef _GETFRIENDDEMANDSSTATUS
#define _GETFRIENDDEMANDSSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetFriendDemandsStatus.h"
#include <vector>
#include <cstring>

class GetFriendDemandsStatus :public  Serializable {
    private:
         static std::vector<GetFriendDemandsStatus*>* _values;
    public:
         static GetFriendDemandsStatus* AUTHENTICATION_REQUIRED;
    public:
         static GetFriendDemandsStatus* SUCCESS;
    public:
         static GetFriendDemandsStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetFriendDemandsStatus*>* values();
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
        GetFriendDemandsStatus(const char* name, int value);
    public:
         static GetFriendDemandsStatus* fromValue(int value);
    public:
         static GetFriendDemandsStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetFriendDemandsStatus();
};
#endif // _GETFRIENDDEMANDSSTATUS