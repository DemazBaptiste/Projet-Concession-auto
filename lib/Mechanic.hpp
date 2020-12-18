#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Mechanic : public Employee
{

  public:
    Mechanic(string, string, string);
    void repair(string, string);
    void write_syntax();
};