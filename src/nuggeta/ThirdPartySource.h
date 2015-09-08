#ifndef _THIRDPARTYSOURCE
#define _THIRDPARTYSOURCE
#include "NUtils.h"
#include "Serializable.h"
#include "ThirdPartySource.h"
#include <vector>
#include <cstring>

class ThirdPartySource :public  Serializable {
    private:
         static std::vector<ThirdPartySource*>* _values;
    public:
         static ThirdPartySource* FACEBOOK;
    public:
         static ThirdPartySource* GOOGLEPLUS;
    public:
         static std::vector<ThirdPartySource*>* values();
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
        ThirdPartySource(const char* name, int value);
    public:
         static ThirdPartySource* fromValue(int value);
    public:
         static ThirdPartySource* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~ThirdPartySource();
};
#endif // _THIRDPARTYSOURCE