#include "bst.h"


template <class T>
BST<T>::BST() {
  root = NULL;
  count = 0;
}

template <class T>
BST<T>::BST(const BST<T> &bst) {
  cout << "hi" << endl;
}

template <class T>
BST<T>::~BST() {
  //Phil
}

template <class T>
bool BST<T>::empty() const {
  return count == 0;
}

template <class T>
T* BST<T>::get(const T &k) const {
  //Phil
}

template <class T>
void BST<T>::insert(T *k) {
  //Phil
}

template <class T>
void BST<T>::remove(const T &k) {

}

template <class T>
T* BST<T>::maximum() const {
  //Phil
}

template <class T>
T* BST<T>::minimum() const {
  //Phil
}

template <class T>
T* BST<T>::successor(const T &k) const {
  //Phil
}

template <class T>
T* BST<T>::predecessor(const T &k) const {

}

template <class T>
string BST<T>::inOrder() const {
  //Phil
}

template <class T>
string BST<T>::preOrder() const {

}

template <class T>
string BST<T>::postOrder() const {

}
