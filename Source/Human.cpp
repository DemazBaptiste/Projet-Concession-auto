#include "../lib/Human.hpp"
#include <iostream>
#include "clear_buffer.cpp"

Human::Human()
{

}

Human::~Human()
{

}

void Human::setFName(string _Surname)
{
  fName = _Surname;
}

string Human::getFName()
{
  return fName;
}

void Human::setLName(string _Name)
{
  lName = _Name;
}

string Human::getLName()
{
  return lName;
}

void Human::setDate(string _Date)
{
  date = _Date;
}

std::string Human::getDate()
{
  return date;
}

void Human::write_syntax()
{
  std::cout << "Nom : " << lName << "\nPrénom : " << fName << "\nDate : " << date <<
  "\nPhone : " << "\n";
}


