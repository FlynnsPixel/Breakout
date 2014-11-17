#ifndef _NUGGETAEXCEPTION
#define _NUGGETAEXCEPTION
#include "Message.h"
#include <cstring>
#include "ErrorCode.h"
#include "NuggetaException.h"
#include "Utils.h"
#include "NUtils.h"

class NuggetaException :public  Message {
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
        ErrorCode* _ErrorCode;
    protected:
        bool _ErrorCodeSet;
    protected:
        const char* _Reason;
    protected:
        bool _ReasonSet;
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
        ErrorCode* getErrorCode();
    public:
        void setErrorCode(ErrorCode* value);
    public:
        bool isErrorCodeSet();
    public:
        void unSetErrorCode();
    public:
        const char* getReason();
    public:
        void setReason(const char* value);
    public:
        bool isReasonSet();
    public:
        void unSetReason();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        NuggetaException();
    public:
        virtual ~NuggetaException();
};
#endif // _NUGGETAEXCEPTION