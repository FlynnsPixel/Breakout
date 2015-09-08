#ifndef _SEARCHIMMEDIATEGAMERESPONSE
#define _SEARCHIMMEDIATEGAMERESPONSE
#include "Message.h"
#include <cstring>
#include "SearchImmediateGameStatus.h"
#include "NGame.h"
#include "SearchImmediateGameResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SearchImmediateGameResponse :public  Message {
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
        SearchImmediateGameStatus* _SearchImmediateGameStatus;
    protected:
        bool _SearchImmediateGameStatusSet;
    protected:
        NGame* _Game;
    protected:
        bool _GameSet;
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
        SearchImmediateGameStatus* getSearchImmediateGameStatus();
    public:
        void setSearchImmediateGameStatus(SearchImmediateGameStatus* value);
    public:
        bool isSearchImmediateGameStatusSet();
    public:
        void unSetSearchImmediateGameStatus();
    public:
        NGame* getGame();
    public:
        void setGame(NGame* value);
    public:
        bool isGameSet();
    public:
        void unSetGame();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SearchImmediateGameResponse();
    public:
        virtual ~SearchImmediateGameResponse();
};
#endif // _SEARCHIMMEDIATEGAMERESPONSE