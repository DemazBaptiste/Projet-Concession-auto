#include "../lib/Human.hpp"
#include <iostream>

using namespace std;

Human::Human()
{

}

Human::Human(string f, string l, string d)
{
  setFName(f);
  setLName(l);
  setDate(d);
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
 std::cout << "Nom : " << lName << "\nPrénom : " << fName << "\nDate : " << date << "\n";
}


