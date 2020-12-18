#include <algorithm>
#include <iterator>
#include "../lib/Human.hpp"
using namespace std;

class Customer : public Human
{
  public:
  string idCustomer;

  Customer(string, string, string);
  ~Customer();

  void operate();

  void write_syntax();
};