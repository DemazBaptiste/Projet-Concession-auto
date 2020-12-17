#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Seller : public Employee
{

  public:
    Seller();
    void sell(string, string);
    void write_syntax();
};