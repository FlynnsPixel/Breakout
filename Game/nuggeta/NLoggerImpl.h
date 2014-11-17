#ifndef _NLOGGERIMPL
#define _NLOGGERIMPL
#include <cstring>
#include "NLogger.h"
#include <iostream>

class NLoggerImpl: public NLogger {
private:
	const char* name;

public:
	NLoggerImpl(const char* name);
	~NLoggerImpl(void);

	virtual void errorCause(const char* msg, std::exception* e);
	virtual void error(const char* msg);
	virtual void info(const char* msg);
	virtual void infoCause(const char* msg, std::exception* e);
	virtual void debug(const char* msg);
	virtual void debugCause(const char* msg, std::exception* e);
	virtual void warn(const char* msg);
	virtual void warnCause(const char* msg, std::exception* e);
	virtual bool isDebug();

};
#endif // _NLOGGER
