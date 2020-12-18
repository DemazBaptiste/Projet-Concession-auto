#include "../lib/Employee_list.hpp"

Employee_list::Employee_list()
{

}

Employee_list::~Employee_list()
{

}

void Employee_list::add_employee_to_list(Employee maPersonne)
{
  membres.push_back(maPersonne);
}

void Employee_list::remove_employee_list()
{
  membres.pop_back();
}
