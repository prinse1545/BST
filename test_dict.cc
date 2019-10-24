// Philipp Moura Srivastava & Anubhav Adhikari
// 22.10.2019
// Filename: test_dict
// Description: This file tests our dictionary class
#include <iostream>
#include <string>
#include <cassert>
#include "dict.h"
#include "imdbpair.cc"
#include "imdbpair.h"

using namespace std;

int main() {

  Dictionary<int> dic;

  int numbers[] = {12, 20, 5, 16, 32, 1, 6};
  //Testing insert
  for(int i = 0; i < 7; i++) {
    dic.insert(&numbers[i]);
  }
  //Testing empty
  assert(dic.empty() == 1);
  //Testing get
  int* p = dic.get(5);

  assert(*p == 5);
  //Testing remove
  dic.remove(5);

  p = dic.get(5);

  assert(p == NULL);






  return 0;
}
