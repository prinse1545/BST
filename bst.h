// Philipp Moura Srivastava & Anubhav Adhikari
// 10.17.2019
// Filename: bst.h
// Description: The header file for a binary search tree
// as described in the ADT by Dr. Lall

#ifndef _BST_h
#define _BST_h

#include <iostream>
#include <string>

using namespace std;

template <class T>

class BST {

public:

  BST();

  BST(const BST<T> &bst);

  ~BST();

  bool empty() const;

  T* get(const T &k) const;

  void insert(T *k);

  void remove(const T &k);

  T* maximum() const;

  T* minimum() const;

  T* successor(const T &k) const;

  T* predecessor(const T &k) const;

  string inOrder() const;

  string preOrder() const;

  string postOrder() const;

private:

  struct Node {
    Node* parent;
    Node* left;
    Node* right;
    T val;
  };

  Node* root;
  int count;

  void clear();

};

#include "bst.cc"

#endif
