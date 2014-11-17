#ifndef _GETSTORESTATUS
#define _GETSTORESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetStoreStatus.h"
#include <vector>
#include <cstring>

class GetStoreStatus :public  Serializable {
    private:
         static std::vector<GetStoreStatus*>* _values;
    public:
         static GetStoreStatus* SUCCESS;
    public:
         static GetStoreStatus* FAILURE;
    public:
         static GetStoreStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetStoreStatus*>* values();
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
        GetStoreStatus(const char* name, int value);
    public:
         static GetStoreStatus* fromValue(int value);
    public:
         static GetStoreStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetStoreStatus();
};
#endif // _GETSTORESTATUS