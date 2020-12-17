#include <algorithm>
#include <iterator>
using namespace std;

class Employee : public Human
{
  public:
  string idEmployee;

  Employee();
  ~Employee();

  void operate();

  void write_syntax();
};