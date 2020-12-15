#include <iostream>
#include <vector>
#include <string>


using namespace std;

class sell_op
{
  private:

    string number;
    string sell;

  public:
    sell_op();
    sell_op(string n);
    void printnumber();
    void setnumber(string n);
    string getnumber();
    string getSell();
};