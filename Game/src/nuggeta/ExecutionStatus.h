#ifndef _EXECUTIONSTATUS
#define _EXECUTIONSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "ExecutionStatus.h"
#include <vector>
#include <cstring>

class ExecutionStatus :public  Serializable {
    private:
         static std::vector<ExecutionStatus*>* _values;
    public:
         static ExecutionStatus* OK;
    public:
         static ExecutionStatus* FAILED;
    public:
         static std::vector<ExecutionStatus*>* values();
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
        ExecutionStatus(const char* name, int value);
    public:
         static ExecutionStatus* fromValue(int value);
    public:
         static ExecutionStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ExecutionStatus();
};
#endif // _EXECUTIONSTATUS