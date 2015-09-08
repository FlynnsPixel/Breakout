#ifndef _CONNECTIONLOSTHANDLER
#define _CONNECTIONLOSTHANDLER
#include "ConnectionLost.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<ConnectionLost*>ConnectionLostHandler;

#endif // _CONNECTIONLOSTHANDLER