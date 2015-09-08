#ifndef _CONNECTIONSTATE
#define _CONNECTIONSTATE

class ConnectionState {
    public:
         static int INITIAL;
    public:
         static int STARTING;
    public:
         static int STARTED;
    public:
         static int STOPPING;
    public:
         static int STOPPED;
    public:
        ConnectionState();
    public:
        virtual ~ConnectionState();
};
#endif // _CONNECTIONSTATE