#include <iostream>
#include <vector>
#include <string>
#include "Customer.hpp"
using namespace std;

class Customer_list
{
  public:
  Customer_list();
  ~Customer_list();
  void add_customer_to_list(Customer);
  void remove_customer_list();
  void Look_tab();
  vector <Customer> membres;

  private:

};
