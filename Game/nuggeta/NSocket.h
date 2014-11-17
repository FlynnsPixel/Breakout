#ifndef _NSOCKET
#define _NSOCKET
#include <cstring>
#include "NetConnectionOpenedHandler.h"
#include <functional>
#include "NetConnectionLostHandler.h"
#include "NetConnectionFailHandler.h"
#include "NetConnectionReceivedHandler.h"
#include "ByteBuffer.h"
#include "NetConnectionSendSuccessHandler.h"
#include "NetConnectionSendFailHandler.h"
#include "NetConnectionDrainHandler.h"

class NSocket {
    public:
        virtual void openConnection(const char* id, const char* host, int port, const char* url, NetConnectionOpenedHandler* connectionOpenedHandler, NetConnectionLostHandler* connectionLostHandler, NetConnectionFailHandler* connectionFailHandler, NetConnectionReceivedHandler* connectionReceivedHandler)=0;
    public:
        virtual void sendBytes(ByteBuffer* byteBuffer, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult)=0;
    public:
        virtual void sendString(const char* strData, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult)=0;
    public:
        virtual void drain(NetConnectionDrainHandler* connectionDrainHandler)=0;
    public:
        virtual void close()=0;
    public:
        virtual ~NSocket(){};
};
#endif // _NSOCKET