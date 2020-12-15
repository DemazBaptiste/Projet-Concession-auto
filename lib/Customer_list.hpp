#include <iostream>
#include <vector>
#include <string>
#include "Human.hpp"
using namespace std;

class Customers_list
{
  public:
  Customers_list();
  ~Customers_list();
  void add_customers_to_list(Human maPersonne);
  void remove_customers_list();
  void Look_tab();
  vector <Human> membres;

  private:

};
