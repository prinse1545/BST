/*
 Philipp Moura Srivastava & Anubhav Adhikari
 10.17.2019
 Filename: test_bst.cc
 Description: The test file for bst.cc implementation for a
              binary search tree
*/
#include <iostream>
#include "bst.h"
#include "bst.cc"
using namespace std;

int main(){

  BST<int> bs;

  int to_insert = 9;
  int to_insert2 = 12;
  int to_insert3 = 20;
  int to_insert4 = 6;
  int* p;

  bs.insert(&to_insert);
  bs.insert(&to_insert2);
  bs.insert(&to_insert3);
  bs.insert(&to_insert4);

  p = bs.get(to_insert);

  int got = *p;

  bs.remove(got);
  return 0;
}
