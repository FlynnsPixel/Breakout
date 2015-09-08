#ifndef _NOTIFICATIONS
#define _NOTIFICATIONS
#include <string>

class Notifications {
    public:
         static void toast(const char* text);
    public:
        Notifications();
    public:
        virtual ~Notifications();
};
#endif // _NOTIFICATIONS