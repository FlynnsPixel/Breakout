#ifndef _LOADGAMESTATUS
#define _LOADGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "LoadGameStatus.h"
#include <vector>
#include <cstring>

class LoadGameStatus :public  Serializable {
    private:
         static std::vector<LoadGameStatus*>* _values;
    public:
         static LoadGameStatus* SUCCESS;
    public:
         static LoadGameStatus* INVALID_CALL;
    public:
         static LoadGameStatus* INTERNAL_ERROR;
    public:
         static LoadGameStatus* UNKNOWN_GAME_ID;
    public:
         static std::vector<LoadGameStatus*>* values();
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
        LoadGameStatus(const char* name, int value);
    public:
         static LoadGameStatus* fromValue(int value);
    public:
         static LoadGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LoadGameStatus();
};
#endif // _LOADGAMESTATUS