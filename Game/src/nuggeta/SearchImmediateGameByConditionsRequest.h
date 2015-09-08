#ifndef _SEARCHIMMEDIATEGAMEBYCONDITIONSREQUEST
#define _SEARCHIMMEDIATEGAMEBYCONDITIONSREQUEST
#include "Message.h"
#include <cstring>
#include "NuggetaQuery.h"
#include "NMatchMakingConditions.h"
#include "SearchImmediateGameByConditionsRequest.h"
#include "Utils.h"
#include "NUtils.h"

class SearchImmediateGameByConditionsRequest :public  Message {
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
        NuggetaQuery* _Query;
    protected:
        bool _QuerySet;
    protected:
        NMatchMakingConditions* _MatchMakingConditions;
    protected:
        bool _MatchMakingConditionsSet;
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
        NuggetaQuery* getQuery();
    public:
        void setQuery(NuggetaQuery* value);
    public:
        bool isQuerySet();
    public:
        void unSetQuery();
    public:
        NMatchMakingConditions* getMatchMakingConditions();
    public:
        void setMatchMakingConditions(NMatchMakingConditions* value);
    public:
        bool isMatchMakingConditionsSet();
    public:
        void unSetMatchMakingConditions();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SearchImmediateGameByConditionsRequest();
    public:
        virtual ~SearchImmediateGameByConditionsRequest();
};
#endif // _SEARCHIMMEDIATEGAMEBYCONDITIONSREQUEST