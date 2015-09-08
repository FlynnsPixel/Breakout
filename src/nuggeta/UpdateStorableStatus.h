#ifndef _UPDATESTORABLESTATUS
#define _UPDATESTORABLESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "UpdateStorableStatus.h"
#include <vector>
#include <cstring>

class UpdateStorableStatus :public  Serializable {
    private:
         static std::vector<UpdateStorableStatus*>* _values;
    public:
         static UpdateStorableStatus* SUCCESS;
    public:
         static UpdateStorableStatus* FAILURE;
    public:
         static UpdateStorableStatus* INVALID_CALL;
    public:
         static UpdateStorableStatus* INTERNAL_ERROR;
    public:
         static std::vector<UpdateStorableStatus*>* values();
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
        UpdateStorableStatus(const char* name, int value);
    public:
         static UpdateStorableStatus* fromValue(int value);
    public:
         static UpdateStorableStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~UpdateStorableStatus();
};
#endif // _UPDATESTORABLESTATUS