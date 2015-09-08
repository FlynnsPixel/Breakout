#ifndef _STARTSTATUS
#define _STARTSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "StartStatus.h"
#include <vector>
#include <cstring>

class StartStatus :public  Serializable {
    private:
         static std::vector<StartStatus*>* _values;
    public:
         static StartStatus* READY;
    public:
         static StartStatus* WARNED;
    public:
         static StartStatus* FAILED;
    public:
         static StartStatus* REFUSED;
    public:
         static std::vector<StartStatus*>* values();
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
        StartStatus(const char* name, int value);
    public:
         static StartStatus* fromValue(int value);
    public:
         static StartStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~StartStatus();
};
#endif // _STARTSTATUS