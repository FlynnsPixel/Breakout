#ifndef _GAMERUNNINGSTATE
#define _GAMERUNNINGSTATE
#include "NUtils.h"
#include "Serializable.h"
#include "GameRunningState.h"
#include <vector>
#include <cstring>

class GameRunningState :public  Serializable {
    private:
         static std::vector<GameRunningState*>* _values;
    public:
         static GameRunningState* PENDING;
    public:
         static GameRunningState* RUNNING;
    public:
         static GameRunningState* FINISHED;
    public:
         static std::vector<GameRunningState*>* values();
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
        GameRunningState(const char* name, int value);
    public:
         static GameRunningState* fromValue(int value);
    public:
         static GameRunningState* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GameRunningState();
};
#endif // _GAMERUNNINGSTATE