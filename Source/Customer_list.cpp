#include "../lib/Customer_list.hpp"
#include "../lib/all_list.hpp"
#include <vector>

Customer_list::Customer_list()
{

}

Customer_list::~Customer_list()
{

}

void Customer_list::add_customer_to_list(Customer myCustomer)
{
  membres.push_back(myCustomer);
}

void Customer_list::remove_customer_list()
{
  membres.pop_back();
}
