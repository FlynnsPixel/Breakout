#ifndef _SENDGAMECHATRESPONSE
#define _SENDGAMECHATRESPONSE
#include "Message.h"
#include <cstring>
#include "SendGameChatStatus.h"
#include "SendGameChatResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SendGameChatResponse :public  Message {
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
        SendGameChatStatus* _SendGameChatStatus;
    protected:
        bool _SendGameChatStatusSet;
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
        SendGameChatStatus* getSendGameChatStatus();
    public:
        void setSendGameChatStatus(SendGameChatStatus* value);
    public:
        bool isSendGameChatStatusSet();
    public:
        void unSetSendGameChatStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SendGameChatResponse();
    public:
        virtual ~SendGameChatResponse();
};
#endif // _SENDGAMECHATRESPONSE