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
  cout << "hi" << endl;
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

  Node* x = curr;
  if(x->right!=NULL){
    Node* y = x->right;
    while(y->left!=NULL){
        y = y->left;
    }
    return &y->val;
  }

  Node* z = x->parent;
  while (z!=NULL && x==z->right){
    x = z;
    z = z->parent;
  }
  return &z->val;
}

template <class T>
T* BST<T>::predecessor(const T &k) const {

}

template <class T>
string BST<T>::inOrder() const {

  inOrderHelper(root);
}

template <class T>
string BST<T>::preOrder() const {

}

template <class T>
string BST<T>::postOrder() const {

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

  string mid = to_string(n->val);


  return inOrderHelper(n->left) + ", " + mid + ", " + inOrderHelper(n->right);
}
