#ifndef _GETLEADERBOARDSTATUS
#define _GETLEADERBOARDSTATUS
#include "NUtils.h"
#include "Serializable.h"
#include "GetLeaderboardStatus.h"
#include <vector>
#include <cstring>

class GetLeaderboardStatus :public  Serializable {
    private:
         static std::vector<GetLeaderboardStatus*>* _values;
    public:
         static GetLeaderboardStatus* SUCCESS;
    public:
         static GetLeaderboardStatus* FAILURE;
    public:
         static GetLeaderboardStatus* UNKNOWN_LEADERBOARD;
    public:
         static GetLeaderboardStatus* INVALID_CALL;
    public:
         static GetLeaderboardStatus* INTERNAL_ERROR;
    public:
         static std::vector<GetLeaderboardStatus*>* values();
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
        GetLeaderboardStatus(const char* name, int value);
    public:
         static GetLeaderboardStatus* fromValue(int value);
    public:
         static GetLeaderboardStatus* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~GetLeaderboardStatus();
};
#endif // _GETLEADERBOARDSTATUS