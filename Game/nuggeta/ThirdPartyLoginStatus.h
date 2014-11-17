#ifndef _THIRDPARTYLOGINSTATUS
#define _THIRDPARTYLOGINSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "ThirdPartyLoginStatus.h"
#include <vector>
#include <cstring>

class ThirdPartyLoginStatus :public  Serializable {
    private:
         static std::vector<ThirdPartyLoginStatus*>* _values;
    public:
         static ThirdPartyLoginStatus* CONNECTED;
    public:
         static ThirdPartyLoginStatus* INVALID_LOGIN;
    public:
         static ThirdPartyLoginStatus* ALREADY_CONNECTED;
    public:
         static ThirdPartyLoginStatus* INVALID_CALL;
    public:
         static ThirdPartyLoginStatus* INTERNAL_ERROR;
    public:
         static ThirdPartyLoginStatus* CANCELED;
    public:
         static ThirdPartyLoginStatus* INVALID_TOKEN;
    public:
         static ThirdPartyLoginStatus* TOKEN_EXPIRED;
    public:
         static std::vector<ThirdPartyLoginStatus*>* values();
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
        ThirdPartyLoginStatus(const char* name, int value);
    public:
         static ThirdPartyLoginStatus* fromValue(int value);
    public:
         static ThirdPartyLoginStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ThirdPartyLoginStatus();
};
#endif // _THIRDPARTYLOGINSTATUS