#ifndef _SETPLAYERNAMESTATUS
#define _SETPLAYERNAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SetPlayerNameStatus.h"
#include <vector>
#include <cstring>

class SetPlayerNameStatus :public  Serializable {
    private:
         static std::vector<SetPlayerNameStatus*>* _values;
    public:
         static SetPlayerNameStatus* SUCCESS;
    public:
         static SetPlayerNameStatus* NOT_ANONYMOUS_PLAYER;
    public:
         static SetPlayerNameStatus* INVALID_CALL;
    public:
         static SetPlayerNameStatus* INTERNAL_ERROR;
    public:
         static std::vector<SetPlayerNameStatus*>* values();
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
        SetPlayerNameStatus(const char* name, int value);
    public:
         static SetPlayerNameStatus* fromValue(int value);
    public:
         static SetPlayerNameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SetPlayerNameStatus();
};
#endif // _SETPLAYERNAMESTATUS