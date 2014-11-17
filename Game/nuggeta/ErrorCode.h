#ifndef _ERRORCODE
#define _ERRORCODE
#include "NUtils.h"
#include "Serializable.h"
#include "ErrorCode.h"
#include <vector>
#include <cstring>

class ErrorCode :public  Serializable {
    private:
         static std::vector<ErrorCode*>* _values;
    public:
         static ErrorCode* INVALID_MESSAGE;
    public:
         static ErrorCode* INTERNAL_ERROR;
    public:
         static std::vector<ErrorCode*>* values();
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
        ErrorCode(const char* name, int value);
    public:
         static ErrorCode* fromValue(int value);
    public:
         static ErrorCode* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ErrorCode();
};
#endif // _ERRORCODE