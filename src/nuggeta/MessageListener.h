#ifndef _MESSAGELISTENER
#define _MESSAGELISTENER
#include "Message.h"

#include "FastDelegate.h"
typedef fastdelegate::FastDelegate1<Message*>MessageListener;

#endif // _MESSAGELISTENER