#ifndef DEF_HUMAN
#define DEF_HUMAN

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Human
{
  public:
  string lName;
  string fName;
  string date;
  Human();
  ~Human();
  void setFName(string _Name);
  string getFName();
  void setLName(string _Surname);
  string getLName();
  void setDate(string _Date);
  string getDate();
  void write_syntax();
};

#endif