#ifndef INDEXED_DATA_INCLUDED
#define INDEXED_DATA_INCLUDED

#include <iostream>

using namespace std;

template <class T>
class IndexedData {
    public:
        IndexedData();
        IndexedData(int);
        IndexedData(int, T);
        T getData();
        bool operator>(const IndexedData<T>&);
        bool operator<(const IndexedData<T>&);
        bool operator==(const IndexedData<T>&);
        ostream& operator<<(ostream&);

    private:
        int index;
        T* data;
};

#include "IndexedData.cpp"

#endif // INDEXED_DATA_INCLUDED
