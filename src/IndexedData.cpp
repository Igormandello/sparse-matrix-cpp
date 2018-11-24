template <class T>
IndexedData<T>::IndexedData() {
    this->index = 0;
    this->data = NULL;
}

template <class T>
IndexedData<T>::IndexedData(int index, T* data) {
    this->index = index;
    this->data = data;
}

template <class T>
IndexedData<T>::IndexedData(int index) {
    this->index = index;
    this->data = NULL;
}

template <class T>
IndexedData<T>::IndexedData(const IndexedData<T>& other) {
    this->index = other.index;
    this->data = other.data;
}

template <class T>
T IndexedData<T>::getData() {
    return *this->data;
}

template <class T>
bool IndexedData<T>::operator<(const IndexedData<T>& a) {
    return this->index < a.index;
}

template <class T>
bool IndexedData<T>::operator>(const IndexedData<T>& a) {
    return this->index > a.index;
}

template <class T>
bool IndexedData<T>::operator==(const IndexedData<T>& a) {
    return this->index == a.index;
}

template <class T>
ostream& operator<<(ostream &os, const IndexedData<T>& indexed) {
    os << indexed.index << ":" << *indexed.data;
    return os;
}
