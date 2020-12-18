#include <algorithm>
#include <iterator>
#include "../lib/Human.hpp"
using namespace std;

class Customer : public Human
{
  public:
  string idCustomer;
  Customer();
  Customer(string, string, string);
  ~Customer();

  void operate();
};