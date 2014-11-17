
#ifndef _NMAP
#define _NMAP

#include <map>
#include <cstring>

struct StrCompare : public std::binary_function<const char*, const char*, bool> {
public:
    bool operator() (const char* str1, const char* str2) const
    { return std::strcmp(str1, str2) < 0; }
};


class NMap
{
public:
	NMap();
	~NMap();

	private:
	std::map<const char*,void*,StrCompare>* _map;

	public :
	   void*&  operator[](const char* str);
	   void erase(const char* str);
};


#endif // _NMAP
