// Philipp Moura Srivastava & Anubhav Adhikari
// 22.10.2019
// Filename: imdbpair.cc
// Description: This file implements the imdbpair header file
#include "imdbpair.h"

bool IMDBPair::operator<(IMDBPair &pair) {
  return name < pair.name;
}


bool IMDBPair::operator>(IMDBPair &pair) {
  return name > pair.name;
}

bool IMDBPair::operator<=(IMDBPair &pair) {
  return name <= pair.name;
}

bool IMDBPair::operator>=(IMDBPair &pair) {
  return name >= pair.name;
}
