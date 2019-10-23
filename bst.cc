/*
 Philipp Moura Srivastava & Anubhav Adhikari
 10.17.2019
 Filename: bst.cc
 Description: The .cc implementation file for a binary search tree
              as declared in the bst.h file
*/
#include "bst.h"

template <class T>
BST<T>::BST() {
  root = NULL;
  count = 0;
}

template <class T>
BST<T>::BST(const BST<T> &bst) {
  copyHelper(bst.root);
}

template <class T>
BST<T>::~BST() {
  clear(root);
}

template <class T>
bool BST<T>::empty() const {
  return count == 0;
}

template <class T>
T* BST<T>::get(const T &k) const {

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
}

template <class T>
void BST<T>::remove(const T &k) {

  //cout<<"in remove(), k is: "<<k;
  if(empty()) throw new EmptyBSTException;

  Node* curr = root;
  //iterating to find the key in the array/tree
  while(curr != NULL && k != curr->val) {

    if(k < curr->val) {
      curr = curr->left;
    }
    else {
      curr = curr->right;
    }
  }
  //actual removal; based on book's algorithm
  Node* z = curr;
  if(z->left == NULL){
    transplant(z, z->right);
  }
  else if(z->right==NULL){
    transplant(z, z->left);
  }
  else{
    Node* y = z->right;
    while(y->left!=NULL){
        y = y->left;
    }
    if(y->parent!=z){
      transplant(y,y->right);
      y->right = z->right;
      y->right->parent = y;
    }
    transplant(z,y);
    y->left = z->left;
    y->left->parent = y;
  }
}

template <class T>
T* BST<T>::maximum() const {

  Node* curr = root;

  while(curr->right != NULL) {
    curr = curr->right;
  }

  return curr;
}

template <class T>
T* BST<T>::minimum() const {

  Node* curr = root;

  while(curr->left != NULL) {
    curr = curr->left;
  }

  return curr;
}

template <class T>
T* BST<T>::successor(const T &k) const {
  Node* curr = root;
  //iterating to find the key in the array/tree
  while(curr != NULL && k != curr->val) {

    if(k < curr->val) {
      curr = curr->left;
    }
    else {
      curr = curr->right;
    }
  }

  if(curr->right != NULL) {
    return maximum();
  }

  y = curr->parent;

  while(y != NULL && curr == y->right) {
    curr = y;
    y = y->parent;
  }

  return y;
}

template <class T>
T* BST<T>::predecessor(const T &k) const {
  Node* curr = root;
  //iterating to find the key in the array/tree
  while(curr != NULL && k != curr->val) {

    if(k < curr->val) {
      curr = curr->left;
    }
    else {
      curr = curr->right;
    }
  }

  if(curr->left != NULL) {
    return maximum();
  }

  y = curr->parent;

  while(y != NULL && curr == y->left) {
    curr = y;
    y = y->parent;
  }

  return y;
}

template <class T>
string BST<T>::inOrder() const {

  inOrderHelper(root);
}

template <class T>
string BST<T>::preOrder() const {

  preOrderHelper(root);
}

template <class T>
string BST<T>::postOrder() const {

  postOrderHelper(root);
}

template <class T>
void BST<T>::transplant(Node* u, Node*v){

  if(u->parent == NULL){
    root = v;
  }
  else if(u == u->parent->left){
    u->parent->left = v;
  }
  else{
    u->parent->right = v;
  }
  if(v!=NULL){
    v->parent = u->parent;
  }
}

template <class T>
void BST<T>::clear(Node* n) {
  if(n == NULL) {
    return;
  }

  clear(n->left);
  clear(n->right);
  delete n;
}

template <class T>
string BST<T>::inOrderHelper(Node* n) const {
  if(n ==  NULL) {
    return "";
  }
  else {
    return inOrderHelper(n->left) + to_string(n->val) + inOrderHelper(n->right);
  }

}

template <class T>
string BST<T>::preOrderHelper(Node* n) const {
  if(n ==  NULL) {
    return "";
  }
  else {
    return to_string(n->val) + inOrderHelper(n->left) + inOrderHelper(n->right);
  }

}

template <class T>
string BST<T>::postOrderHelper(Node* n) const {
  if(n ==  NULL) {
    return "";
  }
  else {
    return inOrderHelper(n->left) + inOrderHelper(n->right) + to_string(n->val);
  }

}

template <class T>
void BST<T>::copyHelper(Node* n) const {
  if(n == NULL) {
    return;
  }

  insert(n->val);
  copyHelper(n->left);
  copyHelper(n->right);

}
