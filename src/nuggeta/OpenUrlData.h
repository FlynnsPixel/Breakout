#ifndef _OPENURLDATA
#define _OPENURLDATA
#include "Message.h"
#include <cstring>
#include "ThirdPartySource.h"
#include "OpenUrlData.h"
#include "Utils.h"
#include "NUtils.h"

class OpenUrlData :public  Message {
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
        const char* _SessionId;
    protected:
        bool _SessionIdSet;
    protected:
        const char* _CallbackId;
    protected:
        bool _CallbackIdSet;
    protected:
        const char* _CallbackUrl;
    protected:
        bool _CallbackUrlSet;
    protected:
        ThirdPartySource* _ThirdPartySource;
    protected:
        bool _ThirdPartySourceSet;
    protected:
        const char* _ThirdPartyId;
    protected:
        bool _ThirdPartyIdSet;
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
        const char* getSessionId();
    public:
        void setSessionId(const char* value);
    public:
        bool isSessionIdSet();
    public:
        void unSetSessionId();
    public:
        const char* getCallbackId();
    public:
        void setCallbackId(const char* value);
    public:
        bool isCallbackIdSet();
    public:
        void unSetCallbackId();
    public:
        const char* getCallbackUrl();
    public:
        void setCallbackUrl(const char* value);
    public:
        bool isCallbackUrlSet();
    public:
        void unSetCallbackUrl();
    public:
        ThirdPartySource* getThirdPartySource();
    public:
        void setThirdPartySource(ThirdPartySource* value);
    public:
        bool isThirdPartySourceSet();
    public:
        void unSetThirdPartySource();
    public:
        const char* getThirdPartyId();
    public:
        void setThirdPartyId(const char* value);
    public:
        bool isThirdPartyIdSet();
    public:
        void unSetThirdPartyId();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        OpenUrlData();
    public:
        virtual ~OpenUrlData();
};
#endif // _OPENURLDATA