/*
 Philipp Moura Srivastava & Anubhav Adhikari
 10.17.2019
 Filename: bst.h
 Description: The header file for a binary search tree
              as described in the ADT by Dr. Lall
*/
#ifndef _BST_h
#define _BST_h

#include <iostream>
#include <string>
#include <exception>

using namespace std;

template <class T>

class BST {

public:

  BST();//done

  BST(const BST<T> &bst);//incomplete

  ~BST();//done

  bool empty() const;//done

  T* get(const T &k) const;//done

  void insert(T *k);//done

  void remove(const T &k);//done

  T* maximum() const;//done

  T* minimum() const;//done

  T* successor(const T &k) const;//incompelte

  T* predecessor(const T &k) const;//incomplete

  string inOrder() const;//done

  string preOrder() const;//incomplete

  string postOrder() const;//incomplete

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
  void transplant(Node* u, Node* v);

};

class EmptyBSTException : public exception {
public:
  string what() {
    return "The tree is empty";
  }
};

//#include "bst.cc"

#endif
