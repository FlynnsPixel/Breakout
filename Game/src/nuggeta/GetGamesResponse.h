#ifndef _GETGAMESRESPONSE
#define _GETGAMESRESPONSE
#include "Message.h"
#include <cstring>
#include "GetGamesStatus.h"
#include "NGame.h"
#include <vector>
#include "GetGamesResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetGamesResponse :public  Message {
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
        GetGamesStatus* _GetGamesStatus;
    protected:
        bool _GetGamesStatusSet;
    protected:
        std::vector<NGame*>* _Games;
    protected:
        bool _GamesSet;
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
        GetGamesStatus* getGetGamesStatus();
    public:
        void setGetGamesStatus(GetGamesStatus* value);
    public:
        bool isGetGamesStatusSet();
    public:
        void unSetGetGamesStatus();
    public:
        std::vector<NGame*>* getGames();
    public:
        void setGames(std::vector<NGame*>* value);
    public:
        bool isGamesSet();
    public:
        void unSetGames();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetGamesResponse();
    public:
        virtual ~GetGamesResponse();
};
#endif // _GETGAMESRESPONSE