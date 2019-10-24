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
#include "assert.h"

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
  int* x = bs.successor(to_insert2);
  cout<<"The successor to 12 is "<<*x<<endl;
  assert(*x == 20);
  int* y = bs.predecessor(to_insert2);
  cout<<"The predecessor to 12 is "<<*y<<endl;
  assert(*y == 9);

  BST<int>cs=bs;
  cout<<"inOrder() of bs is: "<<bs.inOrder()<<endl;
  cout<<"inOrder() of cs is: "<<cs.inOrder()<<endl;
  cout<<"We tried to get value 9, we got: "<<*p<<endl;
  string str = bs.inOrder();
  cout <<"inOrder() is "<< str << endl;
  string str1 = bs.preOrder();
  cout<<"preOrder() is "<< str1 <<endl;
  string str2 = bs.postOrder();
  cout<<"postOrder() is "<<str2<<endl;

  return 0;
}
