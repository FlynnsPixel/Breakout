#ifndef _STARTDETAILS
#define _STARTDETAILS
#include "Serializable.h"
#include <cstring>
#include "StartDetails.h"
#include "Utils.h"
#include "NUtils.h"

class StartDetails :public  Serializable {
    public:
         static short serializerID;
    protected:
        const char* _storeId;
    protected:
        bool _storeIdSet;
    protected:
        const char* _Data;
    protected:
        bool _DataSet;
    protected:
        bool _UseDefaultImpl;
    protected:
        bool _UseDefaultImplSet;
    protected:
        int _CurrentVersion;
    protected:
        bool _CurrentVersionSet;
    protected:
        int _NextVersion;
    protected:
        bool _NextVersionSet;
    protected:
        const char* _Title;
    protected:
        bool _TitleSet;
    protected:
        const char* _Text;
    protected:
        bool _TextSet;
    protected:
        const char* _Url;
    protected:
        bool _UrlSet;
    public:
        const char* getStoreId();
    public:
        void setStoreId(const char* value);
    public:
        bool isstoreIdSet();
    public:
        void unSetstoreId();
    public:
        const char* getData();
    public:
        void setData(const char* value);
    public:
        bool isDataSet();
    public:
        void unSetData();
    public:
        bool isUseDefaultImpl();
    public:
        void setUseDefaultImpl(bool value);
    public:
        bool isUseDefaultImplSet();
    public:
        void unSetUseDefaultImpl();
    public:
        int getCurrentVersion();
    public:
        void setCurrentVersion(int value);
    public:
        bool isCurrentVersionSet();
    public:
        void unSetCurrentVersion();
    public:
        int getNextVersion();
    public:
        void setNextVersion(int value);
    public:
        bool isNextVersionSet();
    public:
        void unSetNextVersion();
    public:
        const char* getTitle();
    public:
        void setTitle(const char* value);
    public:
        bool isTitleSet();
    public:
        void unSetTitle();
    public:
        const char* getText();
    public:
        void setText(const char* value);
    public:
        bool isTextSet();
    public:
        void unSetText();
    public:
        const char* getUrl();
    public:
        void setUrl(const char* value);
    public:
        bool isUrlSet();
    public:
        void unSetUrl();
    public:
        //@Override
        short getSerializerID();
    public:
        void* clone();
    public:
        const char* toString();
    public:
        StartDetails();
    public:
        virtual ~StartDetails();
};
#endif // _STARTDETAILS