#if defined(WIN32)

#ifndef _NSTORAGE_WIN32_H_
#define _NSTORAGE_WIN32_H_

#include <cstring>
#include "NFileUtilsWin32.h"

class NStorageWin32 {
    public:
        static const char* getItem(const char* key);
        static void setItem(const char* key, const char* value);

	private:		
		static void init();

};
#endif // _NSTORAGE_WIN32_H_

#endif // WIN32
