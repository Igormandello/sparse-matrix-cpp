template <class T>
SparseMatrix<T>::SparseMatrix(T defaultInfo) {
  this->defaultInfo = *new T(defaultInfo);
}

template <class T>
void SparseMatrix<T>::add(int row, int col, T info) {
  T* infoClone = new T(info);
  IndexedData<T> data(col, infoClone);

  IndexedData<AVLTree<IndexedData<T> > > testData(row);
  IndexedData<AVLTree<IndexedData<T> > >* rowNode = this->rows.get(testData);
  if (rowNode != NULL) {
    IndexedData<T>* colNode = rowNode->getData().get(col);
    if (colNode == NULL) {
      rowNode->getData().add(data);
    }
  } else {
    AVLTree<IndexedData<T> >* colTree = new AVLTree<IndexedData<T> >();
    colTree->add(data);

    IndexedData<AVLTree<IndexedData<T> > > rowNode(row, colTree);
    this->rows.add(rowNode);
  }
}

template <class T>
void SparseMatrix<T>::remove(T info) {}

template <class T>
T SparseMatrix<T>::get(int row, int col) {
  IndexedData<AVLTree<IndexedData<T> > >* rowNode = this->rows.get(row);
  if (rowNode != NULL) {
    IndexedData<T>* colNode = rowNode->getData().get(col);
    if (colNode != NULL)
      return colNode->getData();
    else
      return *new T(defaultInfo);
  } else
    return *new T(defaultInfo);
}

template <class T>
bool SparseMatrix<T>::contains(T info) {
  return false;
}

template <class T>
ostream& operator<<(ostream& os, const SparseMatrix<T>& sm) {
  os << sm.rows;
}
