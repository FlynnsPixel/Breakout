#ifndef _NSOCKETIMPL
#define _NSOCKETIMPL
#include "NSocket.h"
#include <string>
#include "NetConnectionOpenedHandler.h"
#include "NetConnectionLostHandler.h"
#include "NetConnectionFailHandler.h"
#include "NetConnectionReceivedHandler.h"
#include "ByteBuffer.h"
#include "NetConnectionSendSuccessHandler.h"
#include "NetConnectionSendFailHandler.h"
#include "NetConnectionDrainHandler.h"
#include <iostream>

#if defined(__ANDROID__) || defined(__APPLE__)
#include "NSocketImplBSD.h"
#elif defined(WIN32)
#include "NSocketImplWin32.h"
#endif



class NSocketImpl :public  NSocket {
public :

	const char* id;
	const char* host;
	int port;
	NSocket* socket;
	

	public:
		 NetConnectionOpenedHandler* connectionOpenedHandler; 
		 NetConnectionLostHandler* connectionLostHandler;
		 NetConnectionFailHandler* connectionFailHandler; 
		 NetConnectionReceivedHandler* connectionReceivedHandler;
    public:
        void openConnection(const char* id, const char* host, int port, const char* url, NetConnectionOpenedHandler* connectionOpenedHandler, NetConnectionLostHandler* connectionLostHandler, NetConnectionFailHandler* connectionFailHandler, NetConnectionReceivedHandler* connectionReceivedHandler);
    public:
        void sendBytes(ByteBuffer* byteBuffer, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult);
    public:
        void drain(NetConnectionDrainHandler* connectionDrainHandler);
    public:
        void close();
    public:
        void sendString(const char* strData, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult);
    public:
        NSocketImpl();
        ~NSocketImpl();

};
#endif // _NSOCKETIMPL
