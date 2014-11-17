#ifndef _NINVITATIONSTATUS
#define _NINVITATIONSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "NInvitationStatus.h"
#include <vector>
#include <cstring>

class NInvitationStatus :public  Serializable {
    private:
         static std::vector<NInvitationStatus*>* _values;
    public:
         static NInvitationStatus* PENDING;
    public:
         static NInvitationStatus* ACCEPTED;
    public:
         static NInvitationStatus* REFUSED;
    public:
         static NInvitationStatus* EXPIRED;
    public:
         static std::vector<NInvitationStatus*>* values();
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
        NInvitationStatus(const char* name, int value);
    public:
         static NInvitationStatus* fromValue(int value);
    public:
         static NInvitationStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~NInvitationStatus();
};
#endif // _NINVITATIONSTATUS