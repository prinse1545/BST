// Philipp Moura Srivastava & Anubhav Adhikari
// 21.10.2019
// Filename: imdb.cc
// Description: This file reads in imdb movies and puts them in a dictionary
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "dict.h"

using namespace std;

vector<string> split(string line) {

  string s = "";
  vector<string> vec;

  for(int i = 0; i < line.length(); i++) {
    if(char(line[i]) != '\t') {
      s += line[i];
    }
    else {
      vec.push_back(s);
      s = "";
    }
  }

  return vec;
}


int main() {

  ifstream f;

  f.open("data.tsv", ios::in);

  string line;

  while(getline(f, line)) {


    vector<string> row;

    row = split(line);

    cout << row[8] << endl;


  }

  f.close();


  return 0;
}
