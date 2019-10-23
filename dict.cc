


template <class T>
bool Dictionary<T>::empty() const {
  return BST<T>::empty();
}

template <class T>
T* Dictionary<T>::get(const T &k) const {
  return BST<T>::get(k);
}

template <class T>
void Dictionary<T>::insert(T *k) {

  if(BST<T>::empty()) {
    BST<T>::insert(k);
    return;
  }

  if(get(*k) == NULL) {
    BST<T>::insert(k);
  }
  else {
    throw new DuplicateKeyException;
  }

}

template <class T>
void Dictionary<T>::remove(const T &k) {
  BST<T>::remove(k);
}
