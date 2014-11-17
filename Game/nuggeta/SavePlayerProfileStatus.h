#ifndef _SAVEPLAYERPROFILESTATUS
#define _SAVEPLAYERPROFILESTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SavePlayerProfileStatus.h"
#include <vector>
#include <cstring>

class SavePlayerProfileStatus :public  Serializable {
    private:
         static std::vector<SavePlayerProfileStatus*>* _values;
    public:
         static SavePlayerProfileStatus* SUCCESS;
    public:
         static SavePlayerProfileStatus* INVALID_CALL;
    public:
         static SavePlayerProfileStatus* INTERNAL_ERROR;
    public:
         static std::vector<SavePlayerProfileStatus*>* values();
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
        SavePlayerProfileStatus(const char* name, int value);
    public:
         static SavePlayerProfileStatus* fromValue(int value);
    public:
         static SavePlayerProfileStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SavePlayerProfileStatus();
};
#endif // _SAVEPLAYERPROFILESTATUS