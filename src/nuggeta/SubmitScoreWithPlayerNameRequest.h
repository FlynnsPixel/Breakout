#ifndef _SUBMITSCOREWITHPLAYERNAMEREQUEST
#define _SUBMITSCOREWITHPLAYERNAMEREQUEST
#include "Message.h"
#include <cstring>
#include "NScore.h"
#include "SubmitScoreWithPlayerNameRequest.h"
#include "Utils.h"
#include "NUtils.h"

class SubmitScoreWithPlayerNameRequest :public  Message {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        const char* _Name;
    protected:
        bool _NameSet;
    protected:
        NScore* _Score;
    protected:
        bool _ScoreSet;
    protected:
        const char* _LeaderboardId;
    protected:
        bool _LeaderboardIdSet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getRequestId();
    public:
        void setRequestId(const char* value);
    public:
        bool isRequestIdSet();
    public:
        void unSetRequestId();
    public:
        const char* getName();
    public:
        void setName(const char* value);
    public:
        bool isNameSet();
    public:
        void unSetName();
    public:
        NScore* getScore();
    public:
        void setScore(NScore* value);
    public:
        bool isScoreSet();
    public:
        void unSetScore();
    public:
        const char* getLeaderboardId();
    public:
        void setLeaderboardId(const char* value);
    public:
        bool isLeaderboardIdSet();
    public:
        void unSetLeaderboardId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SubmitScoreWithPlayerNameRequest();
    public:
        virtual ~SubmitScoreWithPlayerNameRequest();
};
#endif // _SUBMITSCOREWITHPLAYERNAMEREQUEST