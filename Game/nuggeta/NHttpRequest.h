#ifndef _NHTTPREQUEST
#define _NHTTPREQUEST
#include <cstring>
#include "NetConnectionReceivedHandler.h"
#include <functional>
#include "NetConnectionSendFailHandler.h"

class NHttpRequest {
    public:
        virtual void get(const char* id, const char* url, NetConnectionReceivedHandler* connectionReceivedHandler, NetConnectionSendFailHandler* asyncSendFailResult)=0;
    public:
        virtual void post(const char* id, const char* url, const char* data, NetConnectionReceivedHandler* connectionReceivedHandler, NetConnectionSendFailHandler* asyncSendFailResult)=0;
    public:
        virtual ~NHttpRequest(){};
};
#endif // _NHTTPREQUEST