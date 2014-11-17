#ifndef _MEMORYMANAGEMENT
#define _MEMORYMANAGEMENT
#include <cstring>

class MemoryManagement
{
public:
	static void free(void* o);
	static const char* dupString(const char* str) ;
};

#endif // _MEMORYMANAGEMENT
