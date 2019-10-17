#include <iostream>
#include "bst.h"

using namespace std;

int main() {

  BST<int> bs;

  int to_insert = 9;
  int* p;

  bs.insert(&to_insert);
  p = bs.get(to_insert);

  int got = *p;

  cout << got << endl;

  return 0;
}
