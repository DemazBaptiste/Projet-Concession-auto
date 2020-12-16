#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Human
{
  public:
  string LName;
  string FName;
  string Date;
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
