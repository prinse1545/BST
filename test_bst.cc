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
  int* p;

  bs.insert(&to_insert);
  p = bs.get(to_insert);

  int got = *p;

  cout <<"Value of got is: "<< got << endl;
  bs.remove(got);
  return 0;
}
