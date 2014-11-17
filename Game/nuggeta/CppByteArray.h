#ifndef _CPPBYTEARRAY
#define _CPPBYTEARRAY
#include <cstring>
#include <vector>
#include <iostream>

class CppByteArray
{

private :
	std::vector<unsigned char>* _vector;

public:

	CppByteArray(int size);
	~CppByteArray(void);
	int size();
	void setByteAtIndex(int i, unsigned char);
	void putByte(unsigned char);
	unsigned char&  operator[](unsigned int index);

	const char* getBytes();
};
//unsigned char  operator[](int &index);
#endif // _CPPBYTEARRAY
