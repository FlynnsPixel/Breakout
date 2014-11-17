#ifndef _GETINVITATIONSSTATUS
#define _GETINVITATIONSSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetInvitationsStatus.h"
#include <vector>
#include <cstring>

class GetInvitationsStatus :public  Serializable {
    private:
         static std::vector<GetInvitationsStatus*>* _values;
    public:
         static GetInvitationsStatus* SUCCESS;
    public:
         static GetInvitationsStatus* INVALID_QUERY;
    public:
         static GetInvitationsStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetInvitationsStatus*>* values();
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
        GetInvitationsStatus(const char* name, int value);
    public:
         static GetInvitationsStatus* fromValue(int value);
    public:
         static GetInvitationsStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetInvitationsStatus();
};
#endif // _GETINVITATIONSSTATUS