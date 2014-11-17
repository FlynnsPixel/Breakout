#ifndef _NHTTPREQUESTIMPL
#define _NHTTPREQUESTIMPL
#include "NHttpRequest.h"
#include <cstring>
#include "NetConnectionReceivedHandler.h"
#include "NetConnectionSendFailHandler.h"

class NHttpRequestImpl :public  NHttpRequest {
    public:
        void get(const char* id, const char* url, NetConnectionReceivedHandler* connectionReceivedHandler, NetConnectionSendFailHandler* asyncSendFailResult);
    public:
        void post(const char* id, const char* url, const char* data, NetConnectionReceivedHandler* connectionReceivedHandler, NetConnectionSendFailHandler* asyncSendFailResult);
    public:
        NHttpRequestImpl();
};
#endif // _NHTTPREQUESTIMPL
