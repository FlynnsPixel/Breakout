#ifndef _GETGHOSTSSTATUS
#define _GETGHOSTSSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetGhostsStatus.h"
#include <vector>
#include <cstring>

class GetGhostsStatus :public  Serializable {
    private:
         static std::vector<GetGhostsStatus*>* _values;
    public:
         static GetGhostsStatus* SUCCESS;
    public:
         static GetGhostsStatus* FAILURE;
    public:
         static GetGhostsStatus* INTERNAL_ERROR;
    public:
         static GetGhostsStatus* INVALID_QUERY;
    public:
         static std::vector<GetGhostsStatus*>* values();
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
        GetGhostsStatus(const char* name, int value);
    public:
         static GetGhostsStatus* fromValue(int value);
    public:
         static GetGhostsStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetGhostsStatus();
};
#endif // _GETGHOSTSSTATUS