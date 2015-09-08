#ifndef _OPENCONNECTION
#define _OPENCONNECTION
#include "Message.h"
#include <cstring>
#include "OpenConnection.h"
#include "Utils.h"
#include "NUtils.h"

class OpenConnection :public  Message {
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
        const char* _IpAddress;
    protected:
        bool _IpAddressSet;
    protected:
        int _TcpPort;
    protected:
        bool _TcpPortSet;
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
        const char* getIpAddress();
    public:
        void setIpAddress(const char* value);
    public:
        bool isIpAddressSet();
    public:
        void unSetIpAddress();
    public:
        int getTcpPort();
    public:
        void setTcpPort(int value);
    public:
        bool isTcpPortSet();
    public:
        void unSetTcpPort();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        OpenConnection();
    public:
        virtual ~OpenConnection();
};
#endif // _OPENCONNECTION