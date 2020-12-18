#include "../lib/Car.hpp"

Car::Car()
{

}

void Car::setid(string i)
{
  id = i ;
}
void Car::printCar(){
  cout <<"imatriculation n° : "<<id<<"\n"<<"marque :"<<brand<<"\n";
}

string Car::getbrand()
{
  return brand;
}
string Car::getid()
{
  return id;
}

void Car::setbrand(string _brand)
{
  brand = _brand;
}

void Car::setmodel(string _brand)
{
  model = _brand;
}
string Car::getmodel()
{
 return model;
}

void Car::setprice(float _price)
{
  price = _price;
}
float Car::getprice()
{
  return price;
}

void printCar()
{
  cout <<"immatriculation n° : "<<id<<"\n"<<"marque :"<<brand<<"\n";
}
