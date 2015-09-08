#ifndef _REMOVESTORABLEREQUEST
#define _REMOVESTORABLEREQUEST
#include "Message.h"
#include <cstring>
#include "Storable.h"
#include "RemoveStorableRequest.h"
#include "Utils.h"
#include "NUtils.h"

class RemoveStorableRequest :public  Message {
    public:
         static short serializerID;
    protected:
        const char* _MessageId;
    protected:
        bool _MessageIdSet;
    protected:
        const char* _RequestId;
    protected:
        bool _RequestIdSet;
    protected:
        Storable* _Storable;
    protected:
        bool _StorableSet;
    public:
        const char* getMessageId();
    public:
        void setMessageId(const char* value);
    public:
        bool isMessageIdSet();
    public:
        void unSetMessageId();
    public:
        const char* getRequestId();
    public:
        void setRequestId(const char* value);
    public:
        bool isRequestIdSet();
    public:
        void unSetRequestId();
    public:
        Storable* getStorable();
    public:
        void setStorable(Storable* value);
    public:
        bool isStorableSet();
    public:
        void unSetStorable();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        RemoveStorableRequest();
    public:
        virtual ~RemoveStorableRequest();
};
#endif // _REMOVESTORABLEREQUEST