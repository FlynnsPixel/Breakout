#ifndef _LEADERBOARDORDER
#define _LEADERBOARDORDER
#include "NUtils.h"
#include "Serializable.h"
#include "LeaderboardOrder.h"
#include <vector>
#include <cstring>

class LeaderboardOrder :public  Serializable {
    private:
         static std::vector<LeaderboardOrder*>* _values;
    public:
         static LeaderboardOrder* ASCENDING;
    public:
         static LeaderboardOrder* DESCENDING;
    public:
         static std::vector<LeaderboardOrder*>* values();
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
        LeaderboardOrder(const char* name, int value);
    public:
         static LeaderboardOrder* fromValue(int value);
    public:
         static LeaderboardOrder* valueOf(const char* name);
    public:
        //@Override
        short getSerializerID();
    public:
        const char* toString();
    public:
        void* clone();
    public:
        virtual ~LeaderboardOrder();
};
#endif // _LEADERBOARDORDER