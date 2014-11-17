#ifndef _GETSTORABLESSTATUS
#define _GETSTORABLESSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetStorablesStatus.h"
#include <vector>
#include <cstring>

class GetStorablesStatus :public  Serializable {
    private:
         static std::vector<GetStorablesStatus*>* _values;
    public:
         static GetStorablesStatus* SUCCESS;
    public:
         static GetStorablesStatus* FAILURE;
    public:
         static GetStorablesStatus* INVALID_CALL;
    public:
         static GetStorablesStatus* INTERNAL_ERROR;
    public:
         static GetStorablesStatus* INVALID_QUERY;
    public:
         static std::vector<GetStorablesStatus*>* values();
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
        GetStorablesStatus(const char* name, int value);
    public:
         static GetStorablesStatus* fromValue(int value);
    public:
         static GetStorablesStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetStorablesStatus();
};
#endif // _GETSTORABLESSTATUS