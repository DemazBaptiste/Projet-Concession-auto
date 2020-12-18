#include <iostream>
#include <vector>
#include <string>
#include "Human.hpp"
using namespace std;

class Customer_list
{
  public:
  Customer_list();
  ~Customer_list();
  void add_customer_to_list(Human maPersonne);
  void remove_customer_list();
  void Look_tab();
  vector <Human> membres;

  private:

};
