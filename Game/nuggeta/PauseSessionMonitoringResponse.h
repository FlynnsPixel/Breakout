#ifndef _PAUSESESSIONMONITORINGRESPONSE
#define _PAUSESESSIONMONITORINGRESPONSE
#include "Message.h"
#include <cstring>
#include "PauseSessionMonitoringStatus.h"
#include "PauseSessionMonitoringResponse.h"
#include "Utils.h"
#include "NUtils.h"

class PauseSessionMonitoringResponse :public  Message {
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
        PauseSessionMonitoringStatus* _PauseSessionMonitoringStatus;
    protected:
        bool _PauseSessionMonitoringStatusSet;
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
        PauseSessionMonitoringStatus* getPauseSessionMonitoringStatus();
    public:
        void setPauseSessionMonitoringStatus(PauseSessionMonitoringStatus* value);
    public:
        bool isPauseSessionMonitoringStatusSet();
    public:
        void unSetPauseSessionMonitoringStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        PauseSessionMonitoringResponse();
    public:
        virtual ~PauseSessionMonitoringResponse();
};
#endif // _PAUSESESSIONMONITORINGRESPONSE