#ifndef _GAMECHATNOTIFICATION
#define _GAMECHATNOTIFICATION
#include "Message.h"
#include <cstring>
#include "NPlayer.h"
#include "GameChatNotification.h"
#include "Utils.h"
#include "NUtils.h"

class GameChatNotification :public  Message {
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
        NPlayer* _player;
    protected:
        bool _playerSet;
    protected:
        const char* _message;
    protected:
        bool _messageSet;
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
        NPlayer* getPlayer();
    public:
        void setPlayer(NPlayer* value);
    public:
        bool isplayerSet();
    public:
        void unSetplayer();
    public:
        const char* getMessage();
    public:
        void setMessage(const char* value);
    public:
        bool ismessageSet();
    public:
        void unSetmessage();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        GameChatNotification();
    public:
        virtual ~GameChatNotification();
};
#endif // _GAMECHATNOTIFICATION