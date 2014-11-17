#ifndef _LOADGHOSTSTATUS
#define _LOADGHOSTSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "LoadGhostStatus.h"
#include <vector>
#include <cstring>

class LoadGhostStatus :public  Serializable {
    private:
         static std::vector<LoadGhostStatus*>* _values;
    public:
         static LoadGhostStatus* SUCCESS;
    public:
         static LoadGhostStatus* FAILURE;
    public:
         static LoadGhostStatus* INVALID_CALL;
    public:
         static LoadGhostStatus* INTERNAL_ERROR;
    public:
         static std::vector<LoadGhostStatus*>* values();
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
        LoadGhostStatus(const char* name, int value);
    public:
         static LoadGhostStatus* fromValue(int value);
    public:
         static LoadGhostStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LoadGhostStatus();
};
#endif // _LOADGHOSTSTATUS