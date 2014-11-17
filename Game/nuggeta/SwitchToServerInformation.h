#ifndef _SWITCHTOSERVERINFORMATION
#define _SWITCHTOSERVERINFORMATION
#include "Message.h"
#include <cstring>
#include "SwitchToServerInformation.h"
#include "Utils.h"
#include "NUtils.h"

class SwitchToServerInformation :public  Message {
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
        const char* _Address;
    protected:
        bool _AddressSet;
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
        const char* getAddress();
    public:
        void setAddress(const char* value);
    public:
        bool isAddressSet();
    public:
        void unSetAddress();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SwitchToServerInformation();
    public:
        virtual ~SwitchToServerInformation();
};
#endif // _SWITCHTOSERVERINFORMATION