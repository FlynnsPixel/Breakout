#ifndef _SESSIONEXPIREDHANDLER
#define _SESSIONEXPIREDHANDLER
#include "SessionExpired.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<SessionExpired*>SessionExpiredHandler;

#endif // _SESSIONEXPIREDHANDLER