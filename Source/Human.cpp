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

void Human::setLName(string _Name)
{
  LName = _Name;
}

string Human::getLName()
{
  return LName;
}

void Human::setFName(string _Surname)
{
  FName = _Surname;
}

string Human::getFName()
{
  return FName;
}

void Human::setDate(string _Date)
{
  Date = _Date;
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


