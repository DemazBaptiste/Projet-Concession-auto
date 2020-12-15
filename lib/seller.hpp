#include <iostream>
#include <vector>
#include <string>

using namespace std;

class seller 
{
  private:

    string number;
    string prénom;

  public:
    seller();
    seller(int n,string p);
    void printnumber();
    void getseller(string nom);
    void setnumber(string number);
    void setsurname(string p);
    string getnumber();
    string getname();
};