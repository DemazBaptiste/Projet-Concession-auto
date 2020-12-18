#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Seller : public Employee
{

  public:
    Seller(string, string, string);
    ~Seller();
    void sell(string, string);
    void write_syntax();
};
