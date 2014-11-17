
#ifndef _NUTILS
#define _NUTILS

#include <cstring>
#include <vector>
#include "Serializable.h"
#include "Message.h"
#include "Storable.h"
#include "NMatrix2.h"
#include "stdlib.h"

#if defined(WIN32)
#define strdup _strdup
#endif

class NUtils
{
public:
	NUtils(void);
	~NUtils(void);



	 public:
       static std::vector<const char*>* split(const char* str,const char* ch);
	   static const char* concat(const char*, int);
	   static const char* concat(int, const char*);
	   static const char* concat(const char*, const char*);
	   static const char* concat(const char*,Serializable* message);
	   static const char* concat(const char*,NMatrix2* nmatrix2);
	   static const char* substr(const char* src, int start);
	   static const char* substr(const char* src, int start , int length);
	   static const char* concat(long long int _long, const char* str);

	   static const char* nstrdup(const char* str);



};

#endif // _NUTILS
