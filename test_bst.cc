/*
 Philipp Moura Srivastava & Anubhav Adhikari
 10.17.2019
 Filename: test_bst.cc
 Description: The test file for bst.cc implementation for a
              binary search tree
*/
#include <iostream>
#include "bst.h"
#include "assert.h"
using namespace std;
//////////////////////////////////////////////////////////////

void testEmpty(){
  BST<int>test;
  assert(test.empty()==1);
  int a = 8;
  test.insert(&a);
  assert(test.empty()==0);
}
//////////////////////////////////////////////////////////////

void testInsert(){
  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);
  assert(test.inOrder()=="2 4 8 11 13");
}
//////////////////////////////////////////////////////////////

void testGet(){
  int a = 8;

  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;

  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);
  assert(test.get(a)== &a);
  assert(test.get(b)== &b);
  assert(test.get(e)== &e);
}
/////////////////////////////////////////////////////////////

void testMinimum(){
  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);
  int* x = test.minimum();
  assert(*x == 2);

}
//////////////////////////////////////////////////////////////

void testRemove(){
  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);

  test.remove(d);
  test.remove(a);
  assert(test.inOrder()=="2 3 11 ");
}
///////////////////////////////////////////////////////////////

void testMaximum(){
  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);
  cout<<*test.maximum()<<endl;
  assert(*test.maximum()==13);
}
//////////////////////////////////////////////////////////////

void testAll(){// testSuccessor();
  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);

  int* x = test.minimum();
  assert(*x == 2);

  cout<<*test.maximum()<<endl;
  assert(*test.maximum()==13);

  int* successorValue = test.successor(a);
  assert(*successorValue == 13);

  int* predecessorValue = test.predecessor(c);
  assert(*predecessorValue == 2);

  test.remove(d);
  test.remove(a);
  assert(test.inOrder()=="2 3 11 ");

}
////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////

void testPreOrder(){
  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);cout<<*test.maximum()<<endl;
  assert(*test.maximum()==13);
  test.insert(&e);
  cout << test.preOrder() << endl;
  assert(test.preOrder()=="8 2 3 13 11 ");
}
//////////////////////////////////////////////////////////

void testPostOrder(){  int a = 8;
  int b = 2;
  int c = 3;
  int d = 13;
  int e = 11;
  BST<int>test;
  test.insert(&a);
  test.insert(&b);
  test.insert(&c);
  test.insert(&d);
  test.insert(&e);
  //
  // int* x = test.minimum();
  // assert(*x == 2);
  //
  // cout<<*test.maximum()<<endl;
  // assert(*test.maximum()==13);
  //
  // int* successorValue = test.successor(a);
  // assert(*successorValue == 13);
  //
  // int* predecessorValue = test.predecessor(c);
  // assert(*predecessorValue == 2);
  //
  // test.remove(d);
  // test.remove(a);
  // assert(test.inOrder()=="2 3 11 ");
  // int a = 8;
  // int b = 2;
  // int c = 3;
  // int d = 13;
  // int e = 11;
  // BST<int>test;
  // test.insert(&a);
  // test.insert(&b);
  // test.insert(&c);
  // test.insert(&d);
  // test.insert(&e);

  assert(test.postOrder() == " 3 2 11 13 8");
}
///////////////////////////////////////////////////////




int main()
{

  //testEmpty();
  //testGet();
  //testMaximum();
  //testMinimum();
  //testRemove();
  //testPredecessor();
  //testInOrder();
  //testPreOrder();
 //testPostOrder();
 testAll();
  return 0;
}
