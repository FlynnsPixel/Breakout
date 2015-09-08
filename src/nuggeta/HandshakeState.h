#ifndef _HANDSHAKESTATE
#define _HANDSHAKESTATE
#include "NUtils.h"
#include "Serializable.h"
#include "HandshakeState.h"
#include <vector>
#include <cstring>

class HandshakeState :public  Serializable {
    private:
         static std::vector<HandshakeState*>* _values;
    public:
         static HandshakeState* INIT;
    public:
         static HandshakeState* BALANCE;
    public:
         static HandshakeState* OPEN_SLAVE_CONNECTION;
    public:
         static HandshakeState* SWITCH;
    public:
         static std::vector<HandshakeState*>* values();
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
        HandshakeState(const char* name, int value);
    public:
         static HandshakeState* fromValue(int value);
    public:
         static HandshakeState* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~HandshakeState();
};
#endif // _HANDSHAKESTATE