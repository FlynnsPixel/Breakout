#ifndef _CONNECTIONINTERRUPTEDHANDLER
#define _CONNECTIONINTERRUPTEDHANDLER
#include "ConnectionInterrupted.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<ConnectionInterrupted*>ConnectionInterruptedHandler;

#endif // _CONNECTIONINTERRUPTEDHANDLER