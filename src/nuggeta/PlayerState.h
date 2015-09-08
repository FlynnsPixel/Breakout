#ifndef _PLAYERSTATE
#define _PLAYERSTATE
#include "NUtils.h"
#include "Serializable.h"
#include "PlayerState.h"
#include <vector>
#include <cstring>

class PlayerState :public  Serializable {
    private:
         static std::vector<PlayerState*>* _values;
    public:
         static PlayerState* AVAILABLE;
    public:
         static PlayerState* PLAYING;
    public:
         static std::vector<PlayerState*>* values();
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
        PlayerState(const char* name, int value);
    public:
         static PlayerState* fromValue(int value);
    public:
         static PlayerState* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~PlayerState();
};
#endif // _PLAYERSTATE