#include "../lib/Customer_list.hpp"

Customer_list::Customer_list()
{

}

Customer_list::~Customer_list()
{

}

void Customer_list::add_customer_to_list(Human maPersonne)
{
  membres.push_back(maPersonne);
}

void Customer_list::remove_customer_list()
{
  membres.pop_back();
}
