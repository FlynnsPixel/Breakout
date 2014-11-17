#ifndef _PAUSESESSIONMONITORINGSTATUS
#define _PAUSESESSIONMONITORINGSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "PauseSessionMonitoringStatus.h"
#include <vector>
#include <cstring>

class PauseSessionMonitoringStatus :public  Serializable {
    private:
         static std::vector<PauseSessionMonitoringStatus*>* _values;
    public:
         static PauseSessionMonitoringStatus* PAUSED;
    public:
         static PauseSessionMonitoringStatus* INTERNAL_ERROR;
    public:
         static std::vector<PauseSessionMonitoringStatus*>* values();
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
        PauseSessionMonitoringStatus(const char* name, int value);
    public:
         static PauseSessionMonitoringStatus* fromValue(int value);
    public:
         static PauseSessionMonitoringStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~PauseSessionMonitoringStatus();
};
#endif // _PAUSESESSIONMONITORINGSTATUS