#include "../lib/car.hpp"

car::car()
{

}

void car::setid(string i)
{
  id = i ;
}

string car::getbrand()
{
  return brand;
}
string car::getid()
{
  return id;
}

void car::setbrand(string _brand)
{
  brand = _brand;
}

void car::setmodel(string _brand)
{
  model = _brand;
}
string car::getmodel()
{
 return model;
}

void car::setprice(float _price)
{
  price = _price;
}
float car::getprice()
{
  return price;
}

void car::printcar()
{
  cout <<"immatriculation n° : "<<id<<"\n"<<"marque :"<<brand<<"\n";
}
