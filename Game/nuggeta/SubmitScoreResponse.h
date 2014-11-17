#ifndef _SUBMITSCORERESPONSE
#define _SUBMITSCORERESPONSE
#include "Message.h"
#include <cstring>
#include "SubmitScoreStatus.h"
#include "SubmitScoreResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SubmitScoreResponse :public  Message {
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
        SubmitScoreStatus* _SubmitScoreStatus;
    protected:
        bool _SubmitScoreStatusSet;
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
        SubmitScoreStatus* getSubmitScoreStatus();
    public:
        void setSubmitScoreStatus(SubmitScoreStatus* value);
    public:
        bool isSubmitScoreStatusSet();
    public:
        void unSetSubmitScoreStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SubmitScoreResponse();
    public:
        virtual ~SubmitScoreResponse();
};
#endif // _SUBMITSCORERESPONSE