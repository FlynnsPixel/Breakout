#ifndef _LOGOUTSTATUS
#define _LOGOUTSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "LogoutStatus.h"
#include <vector>
#include <cstring>

class LogoutStatus :public  Serializable {
    private:
         static std::vector<LogoutStatus*>* _values;
    public:
         static LogoutStatus* SUCCESS;
    public:
         static LogoutStatus* INTERNAL_ERROR;
    public:
         static std::vector<LogoutStatus*>* values();
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
        LogoutStatus(const char* name, int value);
    public:
         static LogoutStatus* fromValue(int value);
    public:
         static LogoutStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LogoutStatus();
};
#endif // _LOGOUTSTATUS