#include "../lib/Car.hpp"

<<<<<<< HEAD
void Car::Car()
=======
car::car()
>>>>>>> d64569cf3874f86bb392288d4ccb1ee2cad2110f
{

}

void Car::setid(string i)
{
  id = i ;
}
<<<<<<< HEAD
void Car::printCar(){
  cout <<"imatriculation n° : "<<id<<"\n"<<"marque :"<<brand<<"\n";
}
=======
>>>>>>> d64569cf3874f86bb392288d4ccb1ee2cad2110f

string Car::getbrand()
{
  return brand;
}
string Car::getid()
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

<<<<<<< HEAD
void printCar()
=======
void car::printcar()
>>>>>>> d64569cf3874f86bb392288d4ccb1ee2cad2110f
{
  cout <<"immatriculation n° : "<<id<<"\n"<<"marque :"<<brand<<"\n";
}
