#ifndef _SAVEASGHOSTRESPONSE
#define _SAVEASGHOSTRESPONSE
#include "Message.h"
#include <cstring>
#include "SaveAsGhostStatus.h"
#include "SaveAsGhostResponse.h"
#include "Utils.h"
#include "NUtils.h"

class SaveAsGhostResponse :public  Message {
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
        SaveAsGhostStatus* _SaveAsGhostStatus;
    protected:
        bool _SaveAsGhostStatusSet;
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
        SaveAsGhostStatus* getSaveAsGhostStatus();
    public:
        void setSaveAsGhostStatus(SaveAsGhostStatus* value);
    public:
        bool isSaveAsGhostStatusSet();
    public:
        void unSetSaveAsGhostStatus();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        SaveAsGhostResponse();
    public:
        virtual ~SaveAsGhostResponse();
};
#endif // _SAVEASGHOSTRESPONSE