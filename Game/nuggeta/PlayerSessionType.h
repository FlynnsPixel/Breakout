#ifndef _PLAYERSESSIONTYPE
#define _PLAYERSESSIONTYPE
#include "NUtils.h"
#include "Serializable.h"
#include "PlayerSessionType.h"
#include <vector>
#include <cstring>

class PlayerSessionType :public  Serializable {
    private:
         static std::vector<PlayerSessionType*>* _values;
    public:
         static PlayerSessionType* ANONYMOUS;
    public:
         static PlayerSessionType* AUTHENTICATED;
    public:
         static std::vector<PlayerSessionType*>* values();
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
        PlayerSessionType(const char* name, int value);
    public:
         static PlayerSessionType* fromValue(int value);
    public:
         static PlayerSessionType* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~PlayerSessionType();
};
#endif // _PLAYERSESSIONTYPE