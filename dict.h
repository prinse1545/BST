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

  Dictionary() : BST<T>() {  };

  bool empty() const;//done

  T* get(const T &k) const;//done

  void insert(T *k);//done

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
