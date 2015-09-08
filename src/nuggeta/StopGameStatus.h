#ifndef _STOPGAMESTATUS
#define _STOPGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "StopGameStatus.h"
#include <vector>
#include <cstring>

class StopGameStatus :public  Serializable {
    private:
         static std::vector<StopGameStatus*>* _values;
    public:
         static StopGameStatus* STOPPED;
    public:
         static StopGameStatus* ALREADY_STOPPED;
    public:
         static StopGameStatus* UNKNOWN_GAME;
    public:
         static StopGameStatus* INVALID_CALL;
    public:
         static StopGameStatus* INTERNAL_ERROR;
    public:
         static std::vector<StopGameStatus*>* values();
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
        StopGameStatus(const char* name, int value);
    public:
         static StopGameStatus* fromValue(int value);
    public:
         static StopGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~StopGameStatus();
};
#endif // _STOPGAMESTATUS