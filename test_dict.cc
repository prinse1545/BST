// Philipp Moura Srivastava & Anubhav Adhikari
// 22.10.2019
// Filename: test_dict
// Description: This file tests our dictionary class
#include <iostream>
#include <string>
#include "dict.h"
#include "imdbpair.cc"
#include "imdbpair.h"

using namespace std;

int main() {

  Dictionary<IMDBPair> dic;

  IMDBPair p("hello", "world");

  dic.insert(&p);




  return 0;
}
