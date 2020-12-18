#include <iostream>
#include <vector>
#include <string>
#include "Car.hpp"

using namespace std;

class Stock
{
    private:
     string Car;
    
    public:
    Stock();
    ~Stock();
    void remove_car(string Car);
    void add_car(string Car);
    void getByID();
    void print_Stock();
    vector<Car> list;
};