#ifndef _GETLEADERBOARDREQUEST
#define _GETLEADERBOARDREQUEST
#include "Message.h"
#include <cstring>
#include "LeaderboardPeriod.h"
#include "GetLeaderboardRequest.h"
#include "Utils.h"
#include "NUtils.h"

class GetLeaderboardRequest :public  Message {
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
        const char* _LeaderboardId;
    protected:
        bool _LeaderboardIdSet;
    protected:
        LeaderboardPeriod* _Period;
    protected:
        bool _PeriodSet;
    protected:
        int _Start;
    protected:
        bool _StartSet;
    protected:
        int _Limit;
    protected:
        bool _LimitSet;
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
        const char* getLeaderboardId();
    public:
        void setLeaderboardId(const char* value);
    public:
        bool isLeaderboardIdSet();
    public:
        void unSetLeaderboardId();
    public:
        LeaderboardPeriod* getPeriod();
    public:
        void setPeriod(LeaderboardPeriod* value);
    public:
        bool isPeriodSet();
    public:
        void unSetPeriod();
    public:
        int getStart();
    public:
        void setStart(int value);
    public:
        bool isStartSet();
    public:
        void unSetStart();
    public:
        int getLimit();
    public:
        void setLimit(int value);
    public:
        bool isLimitSet();
    public:
        void unSetLimit();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetLeaderboardRequest();
    public:
        virtual ~GetLeaderboardRequest();
};
#endif // _GETLEADERBOARDREQUEST