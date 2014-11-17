#ifndef _UNJOINGAMESTATUS
#define _UNJOINGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "UnjoinGameStatus.h"
#include <vector>
#include <cstring>

class UnjoinGameStatus :public  Serializable {
    private:
         static std::vector<UnjoinGameStatus*>* _values;
    public:
         static UnjoinGameStatus* SUCCESS;
    public:
         static UnjoinGameStatus* GAME_NOT_FOUND;
    public:
         static UnjoinGameStatus* FAILURE;
    public:
         static UnjoinGameStatus* INVALID_CALL;
    public:
         static UnjoinGameStatus* INTERNAL_ERROR;
    public:
         static std::vector<UnjoinGameStatus*>* values();
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
        UnjoinGameStatus(const char* name, int value);
    public:
         static UnjoinGameStatus* fromValue(int value);
    public:
         static UnjoinGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~UnjoinGameStatus();
};
#endif // _UNJOINGAMESTATUS