#ifndef __N_SAMPLE_PROTOCOL_H__
#define __N_SAMPLE_PROTOCOL_H__

#include "NLoggerFactory.h"

namespace nuggeta {

class NSampleProtocol {
public:
	virtual void init()=0;
	virtual void mainLoop()=0;
	virtual void stop()=0;

public:
	bool isFinished;
protected:
	NLogger* logger;

};
}

#endif // __N_SAMPLE_PROTOCOL_H__
