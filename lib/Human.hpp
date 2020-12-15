#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

class Human
{
  public:
   Human();
   ~Human();
   void setFName(string _Name);
   string getFName();
   void setLName(string _Surname);
   string getLName();
   void setDate(string _Date);
   string getDate();
   void write_syntax();
  private:
   string LName;
   string FName;
   string Date;
};
