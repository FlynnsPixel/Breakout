#ifndef _REMOVEPLAYERSTORABLESTATUS
#define _REMOVEPLAYERSTORABLESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "RemovePlayerStorableStatus.h"
#include <vector>
#include <cstring>

class RemovePlayerStorableStatus :public  Serializable {
    private:
         static std::vector<RemovePlayerStorableStatus*>* _values;
    public:
         static RemovePlayerStorableStatus* SUCCESS;
    public:
         static RemovePlayerStorableStatus* FAILURE;
    public:
         static RemovePlayerStorableStatus* INVALID_CALL;
    public:
         static RemovePlayerStorableStatus* INTERNAL_ERROR;
    public:
         static std::vector<RemovePlayerStorableStatus*>* values();
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
        RemovePlayerStorableStatus(const char* name, int value);
    public:
         static RemovePlayerStorableStatus* fromValue(int value);
    public:
         static RemovePlayerStorableStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~RemovePlayerStorableStatus();
};
#endif // _REMOVEPLAYERSTORABLESTATUS