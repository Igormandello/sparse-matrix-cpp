#ifndef SPARSE_MATRIX_INCLUDED
#define SPARSE_MATRIX_INCLUDED

#include <iostream>
#include "../avl-tree-cpp/src/AVLTree.hpp"
#include "IndexedData.hpp"

using namespace std;

template <class T>
class SparseMatrix {
  public:
    SparseMatrix(T);
    void add(int, int, T);
    T get(int, int);
    bool contains(int, int);
    template <class U>
    friend ostream &operator<<(ostream &, const SparseMatrix<U> &);

  private:
    AVLTree<IndexedData<AVLTree<IndexedData<T>>>> rows;
    T defaultInfo;
    void remove(int, int);
};

#include "SparseMatrix.inl"

#endif
