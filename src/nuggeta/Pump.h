#ifndef _PUMP
#define _PUMP


#if !defined(WIN32)
#include <atomic>
#include <unistd.h>     /* for close() */
#include <pthread.h>
#else
#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#endif

#include "Message.h"
#include <vector>
#include "NSystem.h"
#include "OpenUrl.h"
#include <errno.h>
#include <stdio.h>      /* for printf() and fprintf() */
#include <stdlib.h>     /* for atoi() and exit() */
#include <cstring>     /* for memset() */





class Pump {
	 private:
        std::vector<Message*>* activePumpableMessages;
		 std::vector<Message*>* messagesToDelete;

        std::vector<long long>* times;
		#if !defined(WIN32)
        pthread_mutex_t _pumpMutex;
		#else
			HANDLE ghMutex; 
		#endif
        int timeOut;
    public:
        Pump(int timeOut);
    public:
        std::vector<Message*>* pump();
    public:
        void add(Message* message);
    private:
        void checkCache(long long int tick);
    public:
        virtual ~Pump();
};
#endif // _PUMP
