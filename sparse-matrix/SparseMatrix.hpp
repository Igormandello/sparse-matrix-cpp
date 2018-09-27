#ifndef SPARSE_MATRIX_INCLUDED
#define SPARSE_MATRIX_INCLUDED

#include <iostream>
#include "../avl-tree-cpp/avl-tree/AVLTree.hpp";

using namespace std;

template <class T>
class SparseMatrix {
    public:
        SparseMatrix();
        void add(int, int, T);
        void remove(T);
        T get(int, int);
        bool contains(T);
};

#include "SparseMatrix.cpp"

#endif // SPARSE_MATRIX_INCLUDED
