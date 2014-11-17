#ifndef _CPPINTARRAY
#define _CPPINTARRAY

#include <iostream>

class CppIntArray
{
public:
	CppIntArray(int size);
	~CppIntArray(void);
	int size();
	void setIntAtIndex(int i, int val);
	int&  operator[](int index);
	int a;

};

#endif // _CPPINTARRAY
