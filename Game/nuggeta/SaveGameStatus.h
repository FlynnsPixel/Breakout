#ifndef _SAVEGAMESTATUS
#define _SAVEGAMESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SaveGameStatus.h"
#include <vector>
#include <cstring>

class SaveGameStatus :public  Serializable {
    private:
         static std::vector<SaveGameStatus*>* _values;
    public:
         static SaveGameStatus* SUCCESS;
    public:
         static SaveGameStatus* INVALID_CALL;
    public:
         static SaveGameStatus* INTERNAL_ERROR;
    public:
         static SaveGameStatus* UNKNOWN_GAME_ID;
    public:
         static std::vector<SaveGameStatus*>* values();
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
        SaveGameStatus(const char* name, int value);
    public:
         static SaveGameStatus* fromValue(int value);
    public:
         static SaveGameStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SaveGameStatus();
};
#endif // _SAVEGAMESTATUS