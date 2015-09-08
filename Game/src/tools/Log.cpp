#include "Log.h"
#include <cstdarg>

void Log::print(int arglength, ...) {
	va_list args;
	va_start(args, arglength);

	for (int i = 0; i < arglength; ++i) {
		OutputDebugStringA(va_arg(args, char*));
	}

	va_end(args);
}

char* Log::tofloat(float output) {
	char buffer[40];
	sprintf_s(buffer, "%f", output);
	return buffer;
}

void WINAPI OutputDebugString(LPCTSTR lpOutputString);