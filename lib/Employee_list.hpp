#include <iostream>
#include <vector>
#include <string>
#include "Employee.hpp"
using namespace std;

class Employee_list
{
  public:
  Employee_list();
  ~Employee_list();
  void add_customers_to_list(Employee myEmployee);
  void remove_customers_list();
  void Look_tab();
  vector <Employee> membres;

  private:

};