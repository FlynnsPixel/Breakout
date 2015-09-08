#ifndef _JOINGAMESTATUS
#define _JOINGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "JoinGameStatus.h"
#include <vector>
#include <cstring>

class JoinGameStatus :public  Serializable {
    private:
         static std::vector<JoinGameStatus*>* _values;
    public:
         static JoinGameStatus* ACCEPTED;
    public:
         static JoinGameStatus* REJECTED_NO_MORE_SEAT;
    public:
         static JoinGameStatus* GAME_NOT_FOUND;
    public:
         static JoinGameStatus* ALREADY_IN_GAME;
    public:
         static JoinGameStatus* REJECTED;
    public:
         static JoinGameStatus* INVALID_CALL;
    public:
         static JoinGameStatus* INTERNAL_ERROR;
    public:
         static std::vector<JoinGameStatus*>* values();
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
        JoinGameStatus(const char* name, int value);
    public:
         static JoinGameStatus* fromValue(int value);
    public:
         static JoinGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~JoinGameStatus();
};
#endif // _JOINGAMESTATUS