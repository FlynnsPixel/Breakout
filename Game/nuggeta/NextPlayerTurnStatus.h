#ifndef _NEXTPLAYERTURNSTATUS
#define _NEXTPLAYERTURNSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "NextPlayerTurnStatus.h"
#include <vector>
#include <cstring>

class NextPlayerTurnStatus :public  Serializable {
    private:
         static std::vector<NextPlayerTurnStatus*>* _values;
    public:
         static NextPlayerTurnStatus* SUCCESS;
    public:
         static NextPlayerTurnStatus* FAILURE;
    public:
         static NextPlayerTurnStatus* INVALID_CALL;
    public:
         static NextPlayerTurnStatus* INTERNAL_ERROR;
    public:
         static NextPlayerTurnStatus* GAME_NOT_FOUND;
    public:
         static std::vector<NextPlayerTurnStatus*>* values();
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
        NextPlayerTurnStatus(const char* name, int value);
    public:
         static NextPlayerTurnStatus* fromValue(int value);
    public:
         static NextPlayerTurnStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~NextPlayerTurnStatus();
};
#endif // _NEXTPLAYERTURNSTATUS