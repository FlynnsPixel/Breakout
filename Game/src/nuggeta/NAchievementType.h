#ifndef _NACHIEVEMENTTYPE
#define _NACHIEVEMENTTYPE
#include "NUtils.h"
#include "Serializable.h"
#include "NAchievementType.h"
#include <vector>
#include <cstring>

class NAchievementType :public  Serializable {
    private:
         static std::vector<NAchievementType*>* _values;
    public:
         static NAchievementType* SIMPLE;
    public:
         static NAchievementType* PROGRESS;
    public:
         static std::vector<NAchievementType*>* values();
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
        NAchievementType(const char* name, int value);
    public:
         static NAchievementType* fromValue(int value);
    public:
         static NAchievementType* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~NAchievementType();
};
#endif // _NACHIEVEMENTTYPE