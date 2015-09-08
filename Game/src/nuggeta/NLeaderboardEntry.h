#ifndef _NLEADERBOARDENTRY
#define _NLEADERBOARDENTRY
#include "Storable.h"
#include <cstring>
#include "NScore.h"
#include "NLeaderboardEntry.h"
#include "Utils.h"
#include "NUtils.h"

class NLeaderboardEntry :public  Storable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Data;
    protected:
        bool _DataSet;
    protected:
        const char* _Id;
    protected:
        bool _IdSet;
    protected:
        double _Timestamp;
    protected:
        bool _TimestampSet;
    protected:
        NScore* _Score;
    protected:
        bool _ScoreSet;
    protected:
        const char* _PlayerId;
    protected:
        bool _PlayerIdSet;
    protected:
        const char* _PlayerName;
    protected:
        bool _PlayerNameSet;
    protected:
        const char* _PlayerAvatarPath;
    protected:
        bool _PlayerAvatarPathSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getData();
    public:
        void setData(const char* value);
    public:
        bool isDataSet();
    public:
        void unSetData();
    public:
        const char* getId();
    public:
        void setId(const char* value);
    public:
        bool isIdSet();
    public:
        void unSetId();
    public:
        double getTimestamp();
    public:
        void setTimestamp(double value);
    public:
        bool isTimestampSet();
    public:
        void unSetTimestamp();
    public:
        NScore* getScore();
    public:
        void setScore(NScore* value);
    public:
        bool isScoreSet();
    public:
        void unSetScore();
    public:
        const char* getPlayerId();
    public:
        void setPlayerId(const char* value);
    public:
        bool isPlayerIdSet();
    public:
        void unSetPlayerId();
    public:
        const char* getPlayerName();
    public:
        void setPlayerName(const char* value);
    public:
        bool isPlayerNameSet();
    public:
        void unSetPlayerName();
    public:
        const char* getPlayerAvatarPath();
    public:
        void setPlayerAvatarPath(const char* value);
    public:
        bool isPlayerAvatarPathSet();
    public:
        void unSetPlayerAvatarPath();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NLeaderboardEntry();
    public:
        virtual ~NLeaderboardEntry();
};
#endif // _NLEADERBOARDENTRY