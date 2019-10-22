// Philipp Moura Srivastava
// 22.10.2019
// Filename: imdbpair.h
// Description: This file is the header file of the IMDBPair

#ifndef _IMDBPair_h
#define _IMDBPair_h

#include <string>


using namespace std;

class IMDBPair
{
public:

  IMDBPair() : {  }

  IMDBPair(string name, string genre) : name(name), genre(genre);

  bool operator<(IMDBPair &pair);

  bool operator>(IMDBPair &pair);

  bool operator<=(IMDBPair &pair);

  bool operator>=(IMDBPair &pair);

private:

  string name;
  string genre;
}
