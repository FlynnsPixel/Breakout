#ifndef _GETPLAYERPROFILESTATUS
#define _GETPLAYERPROFILESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetPlayerProfileStatus.h"
#include <vector>
#include <cstring>

class GetPlayerProfileStatus :public  Serializable {
    private:
         static std::vector<GetPlayerProfileStatus*>* _values;
    public:
         static GetPlayerProfileStatus* SUCCESS;
    public:
         static GetPlayerProfileStatus* FAILURE;
    public:
         static GetPlayerProfileStatus* INVALID_CALL;
    public:
         static GetPlayerProfileStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetPlayerProfileStatus*>* values();
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
        GetPlayerProfileStatus(const char* name, int value);
    public:
         static GetPlayerProfileStatus* fromValue(int value);
    public:
         static GetPlayerProfileStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetPlayerProfileStatus();
};
#endif // _GETPLAYERPROFILESTATUS