#ifndef _GETLEADERBOARDRESPONSE
#define _GETLEADERBOARDRESPONSE
#include "Message.h"
#include <cstring>
#include "GetLeaderboardStatus.h"
#include "NLeaderboard.h"
#include "GetLeaderboardResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetLeaderboardResponse :public  Message {
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
        GetLeaderboardStatus* _GetLeaderboardStatus;
    protected:
        bool _GetLeaderboardStatusSet;
    protected:
        NLeaderboard* _Leaderboard;
    protected:
        bool _LeaderboardSet;
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
        GetLeaderboardStatus* getGetLeaderboardStatus();
    public:
        void setGetLeaderboardStatus(GetLeaderboardStatus* value);
    public:
        bool isGetLeaderboardStatusSet();
    public:
        void unSetGetLeaderboardStatus();
    public:
        NLeaderboard* getLeaderboard();
    public:
        void setLeaderboard(NLeaderboard* value);
    public:
        bool isLeaderboardSet();
    public:
        void unSetLeaderboard();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetLeaderboardResponse();
    public:
        virtual ~GetLeaderboardResponse();
};
#endif // _GETLEADERBOARDRESPONSE