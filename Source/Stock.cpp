#include "Stock.hpp"
#include <vector>

Stock::Stock()
{

}

Stock::~Stock()
{

}

void Stock::remove_car(string car)
{
    list.pop_back(car);
}

void Stock::add_car(string car)
{
    list.push_back(car);
}

void Stock::getByID()
{
    
}

void Stock::print_Stock()
{
     
}