#ifndef _INCREASEPLAYERWALLETSTATUS
#define _INCREASEPLAYERWALLETSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "IncreasePlayerWalletStatus.h"
#include <vector>
#include <cstring>

class IncreasePlayerWalletStatus :public  Serializable {
    private:
         static std::vector<IncreasePlayerWalletStatus*>* _values;
    public:
         static IncreasePlayerWalletStatus* SUCCESS;
    public:
         static IncreasePlayerWalletStatus* FAILURE;
    public:
         static IncreasePlayerWalletStatus* INVALID_CALL;
    public:
         static IncreasePlayerWalletStatus* INTERNAL_ERROR;
    public:
         static std::vector<IncreasePlayerWalletStatus*>* values();
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
        IncreasePlayerWalletStatus(const char* name, int value);
    public:
         static IncreasePlayerWalletStatus* fromValue(int value);
    public:
         static IncreasePlayerWalletStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~IncreasePlayerWalletStatus();
};
#endif // _INCREASEPLAYERWALLETSTATUS