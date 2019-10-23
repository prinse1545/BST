// Philipp Moura Srivastava & Anubhav Adhikari
// 21.10.2019
// Filename: dictionary.h
// Description: This file implements a dictionary as described by the ADT
// provided by Dr. Lall

#ifndef _Dictionary_h
#define _Dictionary_h

#include <iostream>
#include <string>
#include <exception>
#include "bst.h"

using namespace std;


template <class T>
class Dictionary : public BST<T> {
public:

  // Constructor: default, constructs a BST
  //
  // Usage: Dictionary<T> dic;

  Dictionary() : BST<T>() {  };

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

  using BST<T>::empty;
  using BST<T>::get;
  using BST<T>::insert;
  using BST<T>::remove;

};

class DuplicateKeyException : public exception {
public:
  string what() {
    return "The  key already exists!";
  }
};

#endif
