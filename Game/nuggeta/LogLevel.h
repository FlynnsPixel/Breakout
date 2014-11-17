#ifndef _LOGLEVEL
#define _LOGLEVEL
#include "NUtils.h"
#include "Serializable.h"
#include "LogLevel.h"
#include <vector>
#include <cstring>

class LogLevel :public  Serializable {
    private:
         static std::vector<LogLevel*>* _values;
    public:
         static LogLevel* LOG_LEVEL_DEBUG;
    public:
         static LogLevel* LOG_LEVEL_INFO;
    public:
         static LogLevel* LOG_LEVEL_WARN;
    public:
         static LogLevel* LOG_LEVEL_ERROR;
    public:
         static LogLevel* LOG_LEVEL_FATAL;
    public:
         static std::vector<LogLevel*>* values();
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
        LogLevel(const char* name, int value);
    public:
         static LogLevel* fromValue(int value);
    public:
         static LogLevel* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LogLevel();
};
#endif // _LOGLEVEL