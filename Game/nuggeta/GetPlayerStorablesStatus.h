#ifndef _GETPLAYERSTORABLESSTATUS
#define _GETPLAYERSTORABLESSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetPlayerStorablesStatus.h"
#include <vector>
#include <cstring>

class GetPlayerStorablesStatus :public  Serializable {
    private:
         static std::vector<GetPlayerStorablesStatus*>* _values;
    public:
         static GetPlayerStorablesStatus* SUCCESS;
    public:
         static GetPlayerStorablesStatus* FAILURE;
    public:
         static GetPlayerStorablesStatus* INVALID_CALL;
    public:
         static GetPlayerStorablesStatus* INTERNAL_ERROR;
    public:
         static GetPlayerStorablesStatus* INVALID_QUERY;
    public:
         static std::vector<GetPlayerStorablesStatus*>* values();
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
        GetPlayerStorablesStatus(const char* name, int value);
    public:
         static GetPlayerStorablesStatus* fromValue(int value);
    public:
         static GetPlayerStorablesStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetPlayerStorablesStatus();
};
#endif // _GETPLAYERSTORABLESSTATUS