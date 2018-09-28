template <class T>
IndexedData<T>::IndexedData(int index, T data) {
    this->index = index;
    this->data = data;
}

template <class T>
T IndexedData<T>::getData() {
    return this->data;
}

template <class T>
bool IndexedData<T>::operator<(const IndexedData<T>& a) {
    return this->index < a.index;
}
