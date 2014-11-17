#ifndef _NSocketImplWin32
#define _NSocketImplWin32

#if  defined(WIN32)
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

#include <winsock2.h>
#include <windows.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>
#include <tchar.h>
#include <strsafe.h>

#pragma comment(lib, "Ws2_32.lib")
#define DEFAULT_BUFLEN 512

DWORD WINAPI ConnectThreadFunction( LPVOID lpParam );
DWORD WINAPI ReadThreadFunction( LPVOID lpParam );
DWORD WINAPI SendThreadFunction( LPVOID lpParam );


class NSocketImplWin32 :public  NSocket {
	private:
		int id;
		const char* host;
		int port;
		WSADATA wsaData;
		HANDLE sendMutex;
		SOCKET ConnectSocket;
		//DWORD   connectThreadId,readThreadId,sendThreadId;
		HANDLE  connectThread,readThread,sendThread; 
		std::vector<CppByteArray*>* pendingMessagesToSend;
		NetConnectionOpenedHandler* connectionOpenedHandler;
		NetConnectionLostHandler* connectionLostHandler;
		NetConnectionFailHandler* connectionFailHandler;
		NetConnectionReceivedHandler* connectionReceivedHandler;
		NetConnectionSendFailHandler* asyncSendFailResult;
		bool destroyRequest;
		bool connectionLost;
		int recvbuflen;
		char*recvbuf;

		 
    public:
		HANDLE mutexClose;
        void openConnection(const char* id, const char* host, int port, const char* url, NetConnectionOpenedHandler* connectionOpenedHandler, NetConnectionLostHandler* connectionLostHandler, NetConnectionFailHandler* connectionFailHandler, NetConnectionReceivedHandler* connectionReceivedHandler);
        void sendBytes(ByteBuffer* byteBuffer, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult);
        void drain(NetConnectionDrainHandler* connectionDrainHandler);
        void close();
        void sendString(const char* strData, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult);
        NSocketImplWin32();
		~NSocketImplWin32();

		void connectSocket();
		void sendMessages();
		void readMessages();

};
#endif // _NSocketImplWin32

#endif
