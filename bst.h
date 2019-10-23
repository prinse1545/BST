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

  // Constructor: default
  // Usage: BST<T> bst;

  BST();//done

  // Constructor: input
  // Usage: BST<T> bst(pointer to element)

  BST(const BST<T> &bst);//incomplete

  //Destructor

  ~BST();//done

  // Function: empty
  //
  // Parameter(s):
  //
  //   None
  //
  // Return Value(s):
  //
  //   bool: true if empty

  bool empty() const;//done

  // Function: get
  //
  // Parameter(s):
  //
  //   k - key
  //
  // Return Value(s):
  //
  //   T* - pointer to key

  T* get(const T &k) const;//done

  // Function: insert
  //
  // Parameter(s):
  //
  //   *k - pointer to element
  //
  // Return Value(s):
  //
  //   None

  void insert(T *k);//done

  // Function: remove
  //
  // Parameter(s):
  //
  //   k - key
  //
  // Return Value(s):
  //
  //   None

  void remove(const T &k);//done

  // Function: maximum
  //
  // Parameter(s):
  //
  //   None
  //
  // Return Value(s):
  //
  //   T* - a pointer to the element

  T* maximum() const;//done

  // Function: minimum
  //
  // Parameter(s):
  //
  //   None
  //
  // Return Value(s):
  //
  //   T* - a pointer to element

  T* minimum() const;//done

  // Function: successor
  //
  // Parameter(s):
  //
  //   k - key
  //
  // Return Value(s):
  //
  //   T* - a pointer pointing to the successor of k

  T* successor(const T &k) const;//done

  // Function: predecessor
  //
  // Parameter(s):
  //
  //   k - key
  //
  // Return Value(s):
  //
  //   T* - a pointer to the predecessor of k

  T* predecessor(const T &k) const;//incomplete

  // Function: inOrder
  //
  // Parameter(s):
  //
  //   None
  //
  // Return Value(s):
  //
  //   string - a string generated from an inOrder tree traversal

  string inOrder() const;//done

  // Function: inOrder
  //
  // Parameter(s):
  //
  //   None
  //
  // Return Value(s):
  //
  //   string - a string generated from an preOrder tree traversal

  string preOrder() const;//incomplete

  // Function: inOrder
  //
  // Parameter(s):
  //
  //   None
  //
  // Return Value(s):
  //
  //   string - a string generated from an postOrder tree traversal

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

  void clear(Node* n);
  void transplant(Node* u, Node* v);
  string inOrderHelper(Node* n) const;
  string preOrderHelper(Node* n) const;
  string postOrderHelper(Node* n) const;

};

class EmptyBSTException : public exception {
public:
  string what() {
    return "The tree is empty";
  }
};

//#include "bst.cc"

#endif
