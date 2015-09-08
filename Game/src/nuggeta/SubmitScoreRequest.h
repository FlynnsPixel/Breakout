#ifndef _SUBMITSCOREREQUEST
#define _SUBMITSCOREREQUEST
#include "Message.h"
#include <cstring>
#include "NScore.h"
#include "SubmitScoreRequest.h"
#include "Utils.h"
#include "NUtils.h"

class SubmitScoreRequest :public  Message {
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
        SubmitScoreRequest();
    public:
        virtual ~SubmitScoreRequest();
};
#endif // _SUBMITSCOREREQUEST