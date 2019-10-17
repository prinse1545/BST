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
  if(empty()) throw new EmptyBSTException;

  Node* curr = root;

  while(curr != NULL && k != curr->val) {

    if(k < curr->val) {
      curr = curr->left;
    }
    else {
      curr = curr->right;
    }
  }

  return &curr->val;
}

template <class T>
void BST<T>::insert(T *k) {
  //Phil

  Node* z = new Node;

  z->parent = NULL;
  z->right = NULL;
  z->left = NULL;
  z->val = *k;

  Node* curr = root;
  Node* y = NULL;

  while(curr != NULL) {
    y = curr;

    if(z->val < curr->val) {
      curr = curr->left;
    }
    else {
      curr = curr->right;
    }
  }

  z->parent = y;
  if(y == NULL) {
    root = z;
  }
  else if(z->val < y->val) {
    y->left = z;
  }
  else {
    y->right = z;
  }

  count++;

  cout << count << endl;

}

template <class T>
void BST<T>::remove(const T &k) {

}

template <class T>
T* BST<T>::maximum() const {
  //Phil
  Node* curr = root;

  while(curr->right != NULL) {
    curr = curr->right;
  }

  return curr;
}

template <class T>
T* BST<T>::minimum() const {
  //Phil

  Node* curr = root;

  while(curr->left != NULL) {
    curr = curr->left;
  }

  return curr;
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

  Node* curr = root;

  if(curr != NULL) {
    inOrder(curr->left);
    cout << curr->val;
    inOrder(curr->right);
  }
}

template <class T>
string BST<T>::preOrder() const {

}

template <class T>
string BST<T>::postOrder() const {

}
