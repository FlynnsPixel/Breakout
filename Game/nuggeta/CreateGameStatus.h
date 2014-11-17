#ifndef _CREATEGAMESTATUS
#define _CREATEGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "CreateGameStatus.h"
#include <vector>
#include <cstring>

class CreateGameStatus :public  Serializable {
    private:
         static std::vector<CreateGameStatus*>* _values;
    public:
         static CreateGameStatus* SUCCESS;
    public:
         static CreateGameStatus* INVALID_CALL;
    public:
         static CreateGameStatus* INTERNAL_ERROR;
    public:
         static std::vector<CreateGameStatus*>* values();
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
        CreateGameStatus(const char* name, int value);
    public:
         static CreateGameStatus* fromValue(int value);
    public:
         static CreateGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~CreateGameStatus();
};
#endif // _CREATEGAMESTATUS