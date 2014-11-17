#ifndef _CONNECTIONSTOPHANDLER
#define _CONNECTIONSTOPHANDLER
#include "ConnectionStop.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<ConnectionStop*>ConnectionStopHandler;

#endif // _CONNECTIONSTOPHANDLER