#ifndef _STORABLESAMPLE
#define _STORABLESAMPLE
#include "GameMessage.h"
#include "Storable.h"
#include <cstring>
#include "StorableSample.h"
#include "Utils.h"
#include "NUtils.h"

class StorableSample :public  GameMessage, Storable {
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
        const char* _StoreId;
    protected:
        bool _StoreIdSet;
    protected:
        const char* _Data;
    protected:
        bool _DataSet;
    protected:
        const char* _GameId;
    protected:
        bool _GameIdSet;
    protected:
        const char* _SenderId;
    protected:
        bool _SenderIdSet;
    protected:
        const char* _IdProperty;
    protected:
        bool _IdPropertySet;
    protected:
        int _NumberProperty;
    protected:
        bool _NumberPropertySet;
    protected:
        bool _BooleanProperty;
    protected:
        bool _BooleanPropertySet;
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
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isStoreIdSet();
    public:
        void unSetStoreId();
    public:
        const char* getData();
    public:
        void setData(const char* value);
    public:
        bool isDataSet();
    public:
        void unSetData();
    public:
        const char* getGameId();
    public:
        void setGameId(const char* value);
    public:
        bool isGameIdSet();
    public:
        void unSetGameId();
    public:
        const char* getSenderId();
    public:
        void setSenderId(const char* value);
    public:
        bool isSenderIdSet();
    public:
        void unSetSenderId();
    public:
        const char* getIdProperty();
    public:
        void setIdProperty(const char* value);
    public:
        bool isIdPropertySet();
    public:
        void unSetIdProperty();
    public:
        int getNumberProperty();
    public:
        void setNumberProperty(int value);
    public:
        bool isNumberPropertySet();
    public:
        void unSetNumberProperty();
    public:
        bool isBooleanProperty();
    public:
        void setBooleanProperty(bool value);
    public:
        bool isBooleanPropertySet();
    public:
        void unSetBooleanProperty();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        StorableSample();
    public:
        virtual ~StorableSample();
};
#endif // _STORABLESAMPLE