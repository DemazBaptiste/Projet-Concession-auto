#include"../lib/Human.hpp"

Human::Human()
{
  LName = "";
  FName = "";
  Date = "";
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
  return Date;
}

void Human::write_syntax()
{
  std::cout << "Nom : " << LName << "\nPrénom : " << FName << "\nDate : " << Date <<
  "\nPhone : " << "\n";
}


