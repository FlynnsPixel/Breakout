#ifndef _REFUSEINVITATIONSTATUS
#define _REFUSEINVITATIONSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "RefuseInvitationStatus.h"
#include <vector>
#include <cstring>

class RefuseInvitationStatus :public  Serializable {
    private:
         static std::vector<RefuseInvitationStatus*>* _values;
    public:
         static RefuseInvitationStatus* SUCCESS;
    public:
         static RefuseInvitationStatus* MISSING_INVITATION_ID;
    public:
         static RefuseInvitationStatus* UNKNOWN_INVITATION_ID;
    public:
         static RefuseInvitationStatus* ALREADY_ACCEPTED;
    public:
         static RefuseInvitationStatus* ALREADY_REFUSED;
    public:
         static RefuseInvitationStatus* NOT_THE_INVITEE;
    public:
         static RefuseInvitationStatus* INTERNAL_ERROR;
    public:
         static std::vector<RefuseInvitationStatus*>* values();
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
        RefuseInvitationStatus(const char* name, int value);
    public:
         static RefuseInvitationStatus* fromValue(int value);
    public:
         static RefuseInvitationStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~RefuseInvitationStatus();
};
#endif // _REFUSEINVITATIONSTATUS