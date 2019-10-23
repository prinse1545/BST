// Philipp Moura Srivastava & Anubhav Adhikari
// 22.10.2019
// Filename: imdbpair.h
// Description: This file is the header file of the IMDBPair

#ifndef _IMDBPair_h
#define _IMDBPair_h

#include <string>
#include <iostream>


using namespace std;

class IMDBPair
{
public:

  IMDBPair() {  };

  IMDBPair(string name, string genre) : name(name), genre(genre) {  };

  bool operator<(IMDBPair &pair) const;

  bool operator>(IMDBPair &pair) const;

  bool operator<=(IMDBPair &pair) const;

  bool operator>=(IMDBPair &pair) const;

  bool operator!=(IMDBPair &pair) const;

  bool operator==(IMDBPair &pair) const;

  friend ostream &operator<<(ostream &print, IMDBPair &pair) {

    print << pair.name << " | " << pair.genre;

    return print;
  }

private:

  string name;
  string genre;
};

#endif
