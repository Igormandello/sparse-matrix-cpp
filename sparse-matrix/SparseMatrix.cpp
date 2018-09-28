template <class T>
SparseMatrix<T>::SparseMatrix() {
    //Seems confuse but it's just a tree, which each node stores a class with index(row) and data(another tree)
    //The internal tree have nodes storing a index(col) and data(the data in the pair row/col)
    this->rows = new AVLTree<IndexedData<AVLTree<IndexedData<T> > > >();
}

template <class T>
void SparseMatrix<T>::add(int row, int col, T info) {
    IndexedData<T> data (col, info);

    IndexedData<AVLTree<IndexedData<T> > > *rowNode = this->rows->get(row);
    if (rowNode != NULL) {
        IndexedData<T> *colNode = rowNode->getData().get(col);
        if (colNode == NULL) {
            rowNode->getData().add(data);
        }
    } else {
        AVLTree<IndexedData<T> > colTree;
        colTree.add(data);

        rowNode = new IndexedData<AVLTree<IndexedData<T> > >(row, colTree);
        this->rows->add(*rowNode);
        this->rows->print(cout);
    }
}

template <class T>
void SparseMatrix<T>::remove(T info) {

}

template <class T>
T SparseMatrix<T>::get(int row, int col) {
    IndexedData<AVLTree<IndexedData<T> > > *rowNode = this->rows->get(row);
    if (rowNode != NULL) {
        IndexedData<T> *colNode = rowNode->getData().get(col);
        if (colNode != NULL)
            return colNode->getData();
        else
            return NULL;
    } else
        return NULL;
}

template <class T>
bool SparseMatrix<T>::contains(T info) {
    return false;
}
