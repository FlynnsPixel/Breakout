#ifndef _SAVEASGHOSTSTATUS
#define _SAVEASGHOSTSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "SaveAsGhostStatus.h"
#include <vector>
#include <cstring>

class SaveAsGhostStatus :public  Serializable {
    private:
         static std::vector<SaveAsGhostStatus*>* _values;
    public:
         static SaveAsGhostStatus* SUCCESS;
    public:
         static SaveAsGhostStatus* FAILURE;
    public:
         static SaveAsGhostStatus* INVALID_CALL;
    public:
         static SaveAsGhostStatus* INTERNAL_ERROR;
    public:
         static std::vector<SaveAsGhostStatus*>* values();
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
        SaveAsGhostStatus(const char* name, int value);
    public:
         static SaveAsGhostStatus* fromValue(int value);
    public:
         static SaveAsGhostStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~SaveAsGhostStatus();
};
#endif // _SAVEASGHOSTSTATUS