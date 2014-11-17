
#if defined(WIN32)

#ifndef _N_FILEUTILS_WIN32_H_
#define _N_FILEUTILS_WIN32_H_


#include <cstring>
#include <vector>
#include <Shlobj.h>

static bool _isInitNFileUtilsWin32;
static std::string pathNFileUtilsWin32;

class  NFileUtilsWin32
{
	public:
		/* override funtions */
  
		static  const char* getStringFromFile(const char* filename) ;
		static void setStringToFile(const char* filename,const char* value) ;
		static void init();

	private :			
		
		
};

// end of platform group
/// @}


#endif // _N_FILEUTILS_WIN32_H_

#endif    // WIN32

