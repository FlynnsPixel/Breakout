#ifndef _LOGINSTATUS
#define _LOGINSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "LoginStatus.h"
#include <vector>
#include <cstring>

class LoginStatus :public  Serializable {
    private:
         static std::vector<LoginStatus*>* _values;
    public:
         static LoginStatus* CONNECTED;
    public:
         static LoginStatus* ALREADY_CONNECTED;
    public:
         static LoginStatus* INTERNAL_ERROR;
    public:
         static LoginStatus* CANCELED;
    public:
         static std::vector<LoginStatus*>* values();
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
        LoginStatus(const char* name, int value);
    public:
         static LoginStatus* fromValue(int value);
    public:
         static LoginStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LoginStatus();
};
#endif // _LOGINSTATUS