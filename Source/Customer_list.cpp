#include "../lib/Client_list.hpp"

Customers_list::Customers_list()
{

}

Customers_list::~Customers_list()
{

}

void Customers_list::add_customers_to_list(Human maPersonne)
{
  membres.push_back(maPersonne);
}

void Customers_list::remove_customers_list()
{
  membres.pop_back();
}
