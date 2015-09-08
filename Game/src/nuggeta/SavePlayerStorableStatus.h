#ifndef _SAVEPLAYERSTORABLESTATUS
#define _SAVEPLAYERSTORABLESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SavePlayerStorableStatus.h"
#include <vector>
#include <cstring>

class SavePlayerStorableStatus :public  Serializable {
    private:
         static std::vector<SavePlayerStorableStatus*>* _values;
    public:
         static SavePlayerStorableStatus* SUCCESS;
    public:
         static SavePlayerStorableStatus* FAILURE;
    public:
         static SavePlayerStorableStatus* INVALID_CALL;
    public:
         static SavePlayerStorableStatus* INTERNAL_ERROR;
    public:
         static std::vector<SavePlayerStorableStatus*>* values();
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
        SavePlayerStorableStatus(const char* name, int value);
    public:
         static SavePlayerStorableStatus* fromValue(int value);
    public:
         static SavePlayerStorableStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SavePlayerStorableStatus();
};
#endif // _SAVEPLAYERSTORABLESTATUS