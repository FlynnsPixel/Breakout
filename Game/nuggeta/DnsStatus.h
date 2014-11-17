#ifndef _DNSSTATUS
#define _DNSSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "DnsStatus.h"
#include <vector>
#include <cstring>

class DnsStatus :public  Serializable {
    private:
         static std::vector<DnsStatus*>* _values;
    public:
         static DnsStatus* SUCCESS;
    public:
         static DnsStatus* WARNED;
    public:
         static DnsStatus* REFUSED;
    public:
         static DnsStatus* FAILED;
    public:
         static DnsStatus* FAILED_TRY_LATER;
    public:
         static std::vector<DnsStatus*>* values();
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
        DnsStatus(const char* name, int value);
    public:
         static DnsStatus* fromValue(int value);
    public:
         static DnsStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~DnsStatus();
};
#endif // _DNSSTATUS