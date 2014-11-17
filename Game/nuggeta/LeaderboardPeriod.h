#ifndef _LEADERBOARDPERIOD
#define _LEADERBOARDPERIOD
#include "NUtils.h"
#include "Serializable.h"
#include "LeaderboardPeriod.h"
#include <vector>
#include <cstring>

class LeaderboardPeriod :public  Serializable {
    private:
         static std::vector<LeaderboardPeriod*>* _values;
    public:
         static LeaderboardPeriod* DAY;
    public:
         static LeaderboardPeriod* MONTH;
    public:
         static LeaderboardPeriod* ALL;
    public:
         static LeaderboardPeriod* WEEK;
    public:
         static std::vector<LeaderboardPeriod*>* values();
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
        LeaderboardPeriod(const char* name, int value);
    public:
         static LeaderboardPeriod* fromValue(int value);
    public:
         static LeaderboardPeriod* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LeaderboardPeriod();
};
#endif // _LEADERBOARDPERIOD