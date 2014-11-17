#ifndef _NMATRIX2
#define _NMATRIX2
#include "Serializable.h"
#include <vector>
#include "NMatrix2.h"

class NMatrix2 {
    private:
        std::vector<Serializable*>* serializableList;
    private:
        short rowCount;
    private:
        short columnCount;
    public:
        NMatrix2(short rowCount, short columnCount);
    public:
        void addItem(Serializable* serializable);
    public:
        void setItem(Serializable* serializable, short row, short column);
    public:
        Serializable* getItem(short row, short column);
    public:
        short getRowCount();
    public:
        short getColumnCount();
    public:
        NMatrix2* clone();
    public:
        virtual ~NMatrix2();
};
#endif // _NMATRIX2