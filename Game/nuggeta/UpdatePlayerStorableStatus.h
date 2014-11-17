#ifndef _UPDATEPLAYERSTORABLESTATUS
#define _UPDATEPLAYERSTORABLESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "UpdatePlayerStorableStatus.h"
#include <vector>
#include <cstring>

class UpdatePlayerStorableStatus :public  Serializable {
    private:
         static std::vector<UpdatePlayerStorableStatus*>* _values;
    public:
         static UpdatePlayerStorableStatus* SUCCESS;
    public:
         static UpdatePlayerStorableStatus* FAILURE;
    public:
         static UpdatePlayerStorableStatus* INVALID_CALL;
    public:
         static UpdatePlayerStorableStatus* INTERNAL_ERROR;
    public:
         static std::vector<UpdatePlayerStorableStatus*>* values();
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
        UpdatePlayerStorableStatus(const char* name, int value);
    public:
         static UpdatePlayerStorableStatus* fromValue(int value);
    public:
         static UpdatePlayerStorableStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~UpdatePlayerStorableStatus();
};
#endif // _UPDATEPLAYERSTORABLESTATUS