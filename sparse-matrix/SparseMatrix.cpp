template <class T>
SparseMatrix<T>::SparseMatrix() {
    //Seems confuse but it's just a tree, which each node stores a class with index(row) and data(another tree)
    //The internal tree have nodes storing a index(col) and data(the data in the pair row/col)
    this->rows = new AVLTree<IndexedData<AVLTree<IndexedData<T>>>>();
}

template <class T>
void SparseMatrix<T>::add(int row, int col, T info) {

}

template <class T>
void SparseMatrix<T>::remove(T info) {

}

template <class T>
T SparseMatrix<T>::get(int row, int col) {
    return NULL;
}

template <class T>
bool SparseMatrix<T>::contains(T info) {
    return false;
}
