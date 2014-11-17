#ifndef _PERIOD
#define _PERIOD
#include "NUtils.h"
#include "Serializable.h"
#include "Period.h"
#include <vector>
#include <cstring>

class Period :public  Serializable {
    private:
         static std::vector<Period*>* _values;
    public:
         static Period* DAY;
    public:
         static Period* WEEK;
    public:
         static Period* MONTH;
    public:
         static Period* YEAR;
    public:
         static std::vector<Period*>* values();
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
        Period(const char* name, int value);
    public:
         static Period* fromValue(int value);
    public:
         static Period* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~Period();
};
#endif // _PERIOD