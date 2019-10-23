
#include "dict.h"

typename <class T>
bool Dictionary<T>::empty() {
  return BST<T>::empty();
}

typename <class T>
T* Dictionary<T>::get(const T &k) {
  return BST<T>::get(k);
}

typename <class T>
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

typename <class T>
void Dictionary<T>::remove(const T &k) {
  BST<T>::remove(k);
}
