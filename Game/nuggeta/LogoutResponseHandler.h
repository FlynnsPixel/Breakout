#ifndef _LOGOUTRESPONSEHANDLER
#define _LOGOUTRESPONSEHANDLER
#include "LogoutResponse.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<LogoutResponse*>LogoutResponseHandler;

#endif // _LOGOUTRESPONSEHANDLER