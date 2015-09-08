#ifndef _GETGAMESSTATUS
#define _GETGAMESSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetGamesStatus.h"
#include <vector>
#include <cstring>

class GetGamesStatus :public  Serializable {
    private:
         static std::vector<GetGamesStatus*>* _values;
    public:
         static GetGamesStatus* SUCCESS;
    public:
         static GetGamesStatus* INTERNAL_ERROR;
    public:
         static GetGamesStatus* INVALID_QUERY;
    public:
         static std::vector<GetGamesStatus*>* values();
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
        GetGamesStatus(const char* name, int value);
    public:
         static GetGamesStatus* fromValue(int value);
    public:
         static GetGamesStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetGamesStatus();
};
#endif // _GETGAMESSTATUS