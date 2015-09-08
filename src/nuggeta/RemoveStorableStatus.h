#ifndef _REMOVESTORABLESTATUS
#define _REMOVESTORABLESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "RemoveStorableStatus.h"
#include <vector>
#include <cstring>

class RemoveStorableStatus :public  Serializable {
    private:
         static std::vector<RemoveStorableStatus*>* _values;
    public:
         static RemoveStorableStatus* SUCCESS;
    public:
         static RemoveStorableStatus* FAILURE;
    public:
         static RemoveStorableStatus* INVALID_CALL;
    public:
         static RemoveStorableStatus* INTERNAL_ERROR;
    public:
         static std::vector<RemoveStorableStatus*>* values();
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
        RemoveStorableStatus(const char* name, int value);
    public:
         static RemoveStorableStatus* fromValue(int value);
    public:
         static RemoveStorableStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~RemoveStorableStatus();
};
#endif // _REMOVESTORABLESTATUS