#ifndef _NLOGGER
#define _NLOGGER
#include <cstring>
#include <exception>

class NLogger {
    public:
        virtual void errorCause(const char* msg, std::exception* e)=0;
    public:
        virtual void error(const char* msg)=0;
    public:
        virtual void info(const char* msg)=0;
    public:
        virtual void infoCause(const char* msg, std::exception* e)=0;
    public:
        virtual void debug(const char* msg)=0;
    public:
        virtual void debugCause(const char* msg, std::exception* e)=0;
    public:
        virtual void warn(const char* msg)=0;
    public:
        virtual void warnCause(const char* msg, std::exception* e)=0;
    public:
        virtual bool isDebug()=0;
    public:
        virtual ~NLogger(){};
};
#endif // _NLOGGER