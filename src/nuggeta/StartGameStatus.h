#ifndef _STARTGAMESTATUS
#define _STARTGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "StartGameStatus.h"
#include <vector>
#include <cstring>

class StartGameStatus :public  Serializable {
    private:
         static std::vector<StartGameStatus*>* _values;
    public:
         static StartGameStatus* STARTED;
    public:
         static StartGameStatus* ALREADY_STARTED;
    public:
         static StartGameStatus* UNKNOWN_GAME;
    public:
         static StartGameStatus* INVALID_CALL;
    public:
         static StartGameStatus* INTERNAL_ERROR;
    public:
         static std::vector<StartGameStatus*>* values();
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
        StartGameStatus(const char* name, int value);
    public:
         static StartGameStatus* fromValue(int value);
    public:
         static StartGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~StartGameStatus();
};
#endif // _STARTGAMESTATUS