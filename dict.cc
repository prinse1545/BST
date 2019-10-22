
#include "dict.h"

typename <class T>
bool Dictionary<T>::empty() {
  return empty();
}

typename <class T>
T* Dictionary<T>::get(const T &k) {
  return get(k);
}

typename <class T>
void Dictionary<T>::insert(T *k) {

  if(get(*k) == NULL) {
    insert(k);
  }
  else {
    throw new DuplicateKeyException;
  }

}

typename <class T>
void Dictionary<T>::remove(const T &k) {
  remove(k);
}
