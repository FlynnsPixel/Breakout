#ifndef _BYTEBUFFER
#define _BYTEBUFFER
#include "ByteBuffer.h"
#include "CppByteArray.h"
#include <iostream>

class ByteBuffer {
	private:
		int _position;
		CppByteArray * data;

    public:
		ByteBuffer();
		~ByteBuffer();
        void putShortAt(int i, short value);
    public:
        void flip();
    public:
         static ByteBuffer* allocate();
    public:
         static ByteBuffer* wrap(CppByteArray* data);
    public:
        void skip(int n);
    public:
		int size();
        int limit();
    public:
        int position();
    public:
        unsigned char get();
    public:
        int getInt();
    public:
        short getShort();
    public:
        double getDouble();
    public:
        CppByteArray* getBytes(int length);
		char* getByteArray(void);
    public:
        long long int getLong();
    public:
        float getFloat();
    public:
        void putShort(short shortValue);
    public:
        void put(unsigned char b);
    public:
        void putIntAt(int sizePosition, int i);
    public:
        void putBytes(CppByteArray* bytesObj);
    public:
        void putInt(int value);
    public:
        void putDouble(double value);
    public:
        void putFloat(float value);
    public:
        void putLong(long long int value);

};
#endif // _BYTEBUFFER
