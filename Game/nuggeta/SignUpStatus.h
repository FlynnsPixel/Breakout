#ifndef _SIGNUPSTATUS
#define _SIGNUPSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SignUpStatus.h"
#include <vector>
#include <cstring>

class SignUpStatus :public  Serializable {
    private:
         static std::vector<SignUpStatus*>* _values;
    public:
         static SignUpStatus* ACCOUNT_CREATED;
    public:
         static SignUpStatus* INTERNAL_ERROR;
    public:
         static SignUpStatus* CANCELED;
    public:
         static std::vector<SignUpStatus*>* values();
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
        SignUpStatus(const char* name, int value);
    public:
         static SignUpStatus* fromValue(int value);
    public:
         static SignUpStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SignUpStatus();
};
#endif // _SIGNUPSTATUS