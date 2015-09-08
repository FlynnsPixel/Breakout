#ifndef _MESSAGE
#define _MESSAGE
#include "Serializable.h"
#include <cstring>

class Message :public  Serializable {
    public:
        virtual const char* getRequestId()=0;
    public:
        virtual void setRequestId(const char* requestId)=0;
    public:
        virtual void setMessageId(const char* messageId)=0;
    public:
        virtual const char* getMessageId()=0;
    public:
        virtual ~Message(){};
};
#endif // _MESSAGE