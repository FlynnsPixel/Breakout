#ifndef _GETACHIEVEMENTBOARDRESPONSE
#define _GETACHIEVEMENTBOARDRESPONSE
#include "Message.h"
#include <cstring>
#include "GetAchievementBoardStatus.h"
#include "NAchievementBoard.h"
#include "GetAchievementBoardResponse.h"
#include "Utils.h"
#include "NUtils.h"

class GetAchievementBoardResponse :public  Message {
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
        GetAchievementBoardStatus* _GetAchievementBoardStatus;
    protected:
        bool _GetAchievementBoardStatusSet;
    protected:
        NAchievementBoard* _AchievementBoard;
    protected:
        bool _AchievementBoardSet;
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
        GetAchievementBoardStatus* getGetAchievementBoardStatus();
    public:
        void setGetAchievementBoardStatus(GetAchievementBoardStatus* value);
    public:
        bool isGetAchievementBoardStatusSet();
    public:
        void unSetGetAchievementBoardStatus();
    public:
        NAchievementBoard* getAchievementBoard();
    public:
        void setAchievementBoard(NAchievementBoard* value);
    public:
        bool isAchievementBoardSet();
    public:
        void unSetAchievementBoard();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GetAchievementBoardResponse();
    public:
        virtual ~GetAchievementBoardResponse();
};
#endif // _GETACHIEVEMENTBOARDRESPONSE