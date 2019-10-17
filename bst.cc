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

}

template <class T>
bool BST<T>::empty() const {
  return count == 0;
}
