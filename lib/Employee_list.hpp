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
  void add_employee_to_list(Employee myEmployee);
  void remove_employee_list();
  void Look_tab();
  vector <Employee> membres;

  private:

};