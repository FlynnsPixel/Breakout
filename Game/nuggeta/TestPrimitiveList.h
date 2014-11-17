#ifndef _TESTPRIMITIVELIST
#define _TESTPRIMITIVELIST
#include "Message.h"
#include <cstring>
#include <vector>
#include "NMatrix2.h"
#include "TestPrimitiveList.h"
#include "Utils.h"
#include "NUtils.h"

class TestPrimitiveList :public  Message {
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
        std::vector<const char*>* _StringList;
    protected:
        bool _StringListSet;
    protected:
        std::vector<int>* _IntegerList;
    protected:
        bool _IntegerListSet;
    protected:
        std::vector<short>* _ShortList;
    protected:
        bool _ShortListSet;
    protected:
        std::vector<long long>* _LongList;
    protected:
        bool _LongListSet;
    protected:
        std::vector<float>* _FloatList;
    protected:
        bool _FloatListSet;
    protected:
        std::vector<double>* _DoubleList;
    protected:
        bool _DoubleListSet;
    protected:
        std::vector<bool>* _BooleanList;
    protected:
        bool _BooleanListSet;
    protected:
        NMatrix2* _PlayerMatrix2;
    protected:
        bool _PlayerMatrix2Set;
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
        std::vector<const char*>* getStringList();
    public:
        void setStringList(std::vector<const char*>* value);
    public:
        bool isStringListSet();
    public:
        void unSetStringList();
    public:
        std::vector<int>* getIntegerList();
    public:
        void setIntegerList(std::vector<int>* value);
    public:
        bool isIntegerListSet();
    public:
        void unSetIntegerList();
    public:
        std::vector<short>* getShortList();
    public:
        void setShortList(std::vector<short>* value);
    public:
        bool isShortListSet();
    public:
        void unSetShortList();
    public:
        std::vector<long long>* getLongList();
    public:
        void setLongList(std::vector<long long>* value);
    public:
        bool isLongListSet();
    public:
        void unSetLongList();
    public:
        std::vector<float>* getFloatList();
    public:
        void setFloatList(std::vector<float>* value);
    public:
        bool isFloatListSet();
    public:
        void unSetFloatList();
    public:
        std::vector<double>* getDoubleList();
    public:
        void setDoubleList(std::vector<double>* value);
    public:
        bool isDoubleListSet();
    public:
        void unSetDoubleList();
    public:
        std::vector<bool>* getBooleanList();
    public:
        void setBooleanList(std::vector<bool>* value);
    public:
        bool isBooleanListSet();
    public:
        void unSetBooleanList();
    public:
        NMatrix2* getPlayerMatrix2();
    public:
        void setPlayerMatrix2(NMatrix2* value);
    public:
        bool isPlayerMatrix2Set();
    public:
        void unSetPlayerMatrix2();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        TestPrimitiveList();
    public:
        virtual ~TestPrimitiveList();
};
#endif // _TESTPRIMITIVELIST