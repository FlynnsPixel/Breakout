#ifndef _SAVESTORABLESTATUS
#define _SAVESTORABLESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SaveStorableStatus.h"
#include <vector>
#include <cstring>

class SaveStorableStatus :public  Serializable {
    private:
         static std::vector<SaveStorableStatus*>* _values;
    public:
         static SaveStorableStatus* SUCCESS;
    public:
         static SaveStorableStatus* FAILURE;
    public:
         static SaveStorableStatus* INVALID_CALL;
    public:
         static SaveStorableStatus* INTERNAL_ERROR;
    public:
         static std::vector<SaveStorableStatus*>* values();
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
        SaveStorableStatus(const char* name, int value);
    public:
         static SaveStorableStatus* fromValue(int value);
    public:
         static SaveStorableStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SaveStorableStatus();
};
#endif // _SAVESTORABLESTATUS