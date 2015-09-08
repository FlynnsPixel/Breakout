#ifndef _RAWMESSAGEHANDLER
#define _RAWMESSAGEHANDLER
#include "NRawMessage.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<NRawMessage*>RawMessageHandler;

#endif // _RAWMESSAGEHANDLER