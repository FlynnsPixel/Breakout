#ifndef _CONNECTIONRESUMEDHANDLER
#define _CONNECTIONRESUMEDHANDLER
#include "ConnectionResumed.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<ConnectionResumed*>ConnectionResumedHandler;

#endif // _CONNECTIONRESUMEDHANDLER