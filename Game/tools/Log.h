#include <Windows.h>
#include <iostream>

#pragma once

class Log {

	public:
		static void print(int arglength, ...);
		static char* tofloat(float output);
};