#ifndef _GETPLAYERWALLETSTATUS
#define _GETPLAYERWALLETSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetPlayerWalletStatus.h"
#include <vector>
#include <cstring>

class GetPlayerWalletStatus :public  Serializable {
    private:
         static std::vector<GetPlayerWalletStatus*>* _values;
    public:
         static GetPlayerWalletStatus* SUCCESS;
    public:
         static GetPlayerWalletStatus* FAILURE;
    public:
         static GetPlayerWalletStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetPlayerWalletStatus*>* values();
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
        GetPlayerWalletStatus(const char* name, int value);
    public:
         static GetPlayerWalletStatus* fromValue(int value);
    public:
         static GetPlayerWalletStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetPlayerWalletStatus();
};
#endif // _GETPLAYERWALLETSTATUS