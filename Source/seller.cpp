#include "../lib/seller.hpp"

seller::seller(){
  number = "0000" ;
}
seller::seller(int n,string p)
{
  number = n;
  prénom = p;
}
void seller::setsurname(string p)
{
  prénom = p ;
}
void seller::printnumber(){
  cout <<number;
}
void seller::setnumber(string n)
{
  number = n ;
}
void seller::getseller(string p)
{
  prénom = p ;
}
string seller::getnumber()
{
  return number;
}
string seller::getname()
{
  return number;
}