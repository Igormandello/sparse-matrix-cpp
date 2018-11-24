#ifndef SPARSE_MATRIX_INCLUDED
#define SPARSE_MATRIX_INCLUDED

#include <iostream>
#include "../avl-tree-cpp/avl-tree/AVLTree.hpp"
#include "IndexedData.hpp"

using namespace std;

template <class T>
class SparseMatrix
{
  public:
    SparseMatrix();
    void add(int, int, T);
    void remove(T);
    T get(int, int);
    bool contains(T);
    template <class U>
    friend ostream &operator<<(ostream &, const SparseMatrix<U> &);

  private:
    AVLTree<IndexedData<AVLTree<IndexedData<T>>>> rows;
};

#include "SparseMatrix.inl"

#endif