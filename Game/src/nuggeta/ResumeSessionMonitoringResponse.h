#ifndef _RESUMESESSIONMONITORINGRESPONSE
#define _RESUMESESSIONMONITORINGRESPONSE
#include "Message.h"
#include <cstring>
#include "ResumeSessionMonitoringStatus.h"
#include "ResumeSessionMonitoringResponse.h"
#include "Utils.h"
#include "NUtils.h"

class ResumeSessionMonitoringResponse :public  Message {
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
        ResumeSessionMonitoringStatus* _ResumeSessionMonitoringStatus;
    protected:
        bool _ResumeSessionMonitoringStatusSet;
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
        ResumeSessionMonitoringStatus* getResumeSessionMonitoringStatus();
    public:
        void setResumeSessionMonitoringStatus(ResumeSessionMonitoringStatus* value);
    public:
        bool isResumeSessionMonitoringStatusSet();
    public:
        void unSetResumeSessionMonitoringStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        ResumeSessionMonitoringResponse();
    public:
        virtual ~ResumeSessionMonitoringResponse();
};
#endif // _RESUMESESSIONMONITORINGRESPONSE