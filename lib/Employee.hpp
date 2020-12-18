#include <algorithm>
#include <iterator>
#include "../lib/Human.hpp"
using namespace std;

class Employee : public Human
{
  public:
  string idEmployee;

  Employee(string, string, string, string);
  ~Employee();

  void operate();

  void write_syntax();
};