#if !defined(WIN32)

#ifndef _NSocketImplBSD
#define _NSocketImplBSD

#include "NSocket.h"
#include <cstring>
#include "NetConnectionOpenedHandler.h"
#include "NetConnectionLostHandler.h"
#include "NetConnectionFailHandler.h"
#include "NetConnectionReceivedHandler.h"
#include "ByteBuffer.h"
#include "NLoggerFactory.h"
#include "NetConnectionSendSuccessHandler.h"
#include "NetConnectionSendFailHandler.h"
#include "NetConnectionDrainHandler.h"
#include <iostream>

#include <sys/socket.h>
#include <errno.h>
#include <stdio.h>      /* for printf() and fprintf() */
#include <sys/socket.h> /* for socket(), connect(), send(), and recv() */
#include <arpa/inet.h>  /* for sockaddr_in and inet_addr() */
#include <stdlib.h>     /* for atoi() and exit() */
#include <string.h>     /* for memset() */
#include <unistd.h>     /* for close() */
#include <fcntl.h>
#include <signal.h>
#include <pthread.h>

#define DEFAULT_BUFLEN 512

class NSocketImplBSD :public NSocket {

private:
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

	const char* id;
	const char* host;
	int port;
	int sock;
	int _idSocket;
	pthread_t _nuggetaThreadConnect,_nuggetaThreadRead,_nuggetaThreadSend;
	pthread_mutex_t _nuggetaMutexSend;
	NLogger* logger;

public:
	pthread_mutex_t _nuggetaMutexClose;
	void openConnection(const char* id, const char* host, int port, const char* url, NetConnectionOpenedHandler* connectionOpenedHandler, NetConnectionLostHandler* connectionLostHandler, NetConnectionFailHandler* connectionFailHandler, NetConnectionReceivedHandler* connectionReceivedHandler);
	void openConnectionThread();
	void sendString(const char* strData, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult);
	void sendBytes(ByteBuffer* byteBuffer, NetConnectionSendSuccessHandler* asyncSendSuccessResult, NetConnectionSendFailHandler* asyncSendFailResult);
	void SendData();
	void ReadIncomingData();
	void drain(NetConnectionDrainHandler* connectionDrainHandler);
	void close();

	NSocketImplBSD();
	~NSocketImplBSD();

};
#endif // _NSocketImplBSD
#endif
