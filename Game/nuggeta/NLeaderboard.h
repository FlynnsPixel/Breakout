#ifndef _NLEADERBOARD
#define _NLEADERBOARD
#include "Serializable.h"
#include <cstring>
#include "NLeaderboardEntry.h"
#include <vector>
#include "NLeaderboard.h"
#include "Utils.h"
#include "NUtils.h"

class NLeaderboard :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    protected:
        const char* _Name;
    protected:
        bool _NameSet;
    protected:
        std::vector<NLeaderboardEntry*>* _leaderboardEntries;
    protected:
        bool _leaderboardEntriesSet;
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        std::vector<NLeaderboardEntry*>* getLeaderboardEntries();
    public:
        void setLeaderboardEntries(std::vector<NLeaderboardEntry*>* value);
    public:
        bool isleaderboardEntriesSet();
    public:
        void unSetleaderboardEntries();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NLeaderboard();
    public:
        virtual ~NLeaderboard();
};
#endif // _NLEADERBOARD