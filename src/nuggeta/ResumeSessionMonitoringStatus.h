#ifndef _RESUMESESSIONMONITORINGSTATUS
#define _RESUMESESSIONMONITORINGSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "ResumeSessionMonitoringStatus.h"
#include <vector>
#include <cstring>

class ResumeSessionMonitoringStatus :public  Serializable {
    private:
         static std::vector<ResumeSessionMonitoringStatus*>* _values;
    public:
         static ResumeSessionMonitoringStatus* RESUMED;
    public:
         static ResumeSessionMonitoringStatus* INTERNAL_ERROR;
    public:
         static std::vector<ResumeSessionMonitoringStatus*>* values();
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
        ResumeSessionMonitoringStatus(const char* name, int value);
    public:
         static ResumeSessionMonitoringStatus* fromValue(int value);
    public:
         static ResumeSessionMonitoringStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ResumeSessionMonitoringStatus();
};
#endif // _RESUMESESSIONMONITORINGSTATUS