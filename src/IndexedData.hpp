#ifndef INDEXED_DATA_INCLUDED
#define INDEXED_DATA_INCLUDED

#include <iostream>

using namespace std;

template <class T>
class IndexedData {
  public:
    IndexedData();
    IndexedData(int);
    IndexedData(int, T*);
    IndexedData(const IndexedData<T> &);
    T* getData();
    bool operator>(const IndexedData<T> &);
    bool operator<(const IndexedData<T> &);
    bool operator==(const IndexedData<T> &);
    template <class U>
    friend ostream &operator<<(ostream &, const IndexedData<U> &);

  private:
    int index;
    T* data;
};

#include "IndexedData.inl"

#endif
