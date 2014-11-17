#ifndef _INVITEPLAYERSTATUS
#define _INVITEPLAYERSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "InvitePlayerStatus.h"
#include <vector>
#include <cstring>

class InvitePlayerStatus :public  Serializable {
    private:
         static std::vector<InvitePlayerStatus*>* _values;
    public:
         static InvitePlayerStatus* SUCCESS;
    public:
         static InvitePlayerStatus* INVALID_CALL;
    public:
         static InvitePlayerStatus* UNKNOWN_PLAYER_ID;
    public:
         static InvitePlayerStatus* INTERNAL_ERROR;
    public:
         static std::vector<InvitePlayerStatus*>* values();
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
        InvitePlayerStatus(const char* name, int value);
    public:
         static InvitePlayerStatus* fromValue(int value);
    public:
         static InvitePlayerStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~InvitePlayerStatus();
};
#endif // _INVITEPLAYERSTATUS