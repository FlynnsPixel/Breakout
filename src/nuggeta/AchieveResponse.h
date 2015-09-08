#ifndef _ACHIEVERESPONSE
#define _ACHIEVERESPONSE
#include "Message.h"
#include <cstring>
#include "AchieveStatus.h"
#include "AchieveResponse.h"
#include "Utils.h"
#include "NUtils.h"

class AchieveResponse :public  Message {
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
        AchieveStatus* _AchieveStatus;
    protected:
        bool _AchieveStatusSet;
    protected:
        const char* _AchivementId;
    protected:
        bool _AchivementIdSet;
    protected:
        int _Progress;
    protected:
        bool _ProgressSet;
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
        AchieveStatus* getAchieveStatus();
    public:
        void setAchieveStatus(AchieveStatus* value);
    public:
        bool isAchieveStatusSet();
    public:
        void unSetAchieveStatus();
    public:
        const char* getAchivementId();
    public:
        void setAchivementId(const char* value);
    public:
        bool isAchivementIdSet();
    public:
        void unSetAchivementId();
    public:
        int getProgress();
    public:
        void setProgress(int value);
    public:
        bool isProgressSet();
    public:
        void unSetProgress();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        AchieveResponse();
    public:
        virtual ~AchieveResponse();
};
#endif // _ACHIEVERESPONSE