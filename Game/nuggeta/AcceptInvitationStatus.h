#ifndef _ACCEPTINVITATIONSTATUS
#define _ACCEPTINVITATIONSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "AcceptInvitationStatus.h"
#include <vector>
#include <cstring>

class AcceptInvitationStatus :public  Serializable {
    private:
         static std::vector<AcceptInvitationStatus*>* _values;
    public:
         static AcceptInvitationStatus* SUCCESS;
    public:
         static AcceptInvitationStatus* MISSING_INVITATION_ID;
    public:
         static AcceptInvitationStatus* UNKNOWN_INVITATION_ID;
    public:
         static AcceptInvitationStatus* ALREADY_ACCEPTED;
    public:
         static AcceptInvitationStatus* ALREADY_REFUSED;
    public:
         static AcceptInvitationStatus* NOT_THE_INVITEE;
    public:
         static AcceptInvitationStatus* INTERNAL_ERROR;
    public:
         static std::vector<AcceptInvitationStatus*>* values();
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
        AcceptInvitationStatus(const char* name, int value);
    public:
         static AcceptInvitationStatus* fromValue(int value);
    public:
         static AcceptInvitationStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~AcceptInvitationStatus();
};
#endif // _ACCEPTINVITATIONSTATUS