#include "../lib/intervention.hpp"

intervention::intervention(){
  number = "0000" ;
}
intervention::intervention(string n){
  number = n;
}
void intervention::printintervention(){
  cout <<"id de l'intervention : "<<number<<"\n";
}

void intervention::setnumber(string n)
{
  number = n ;
}
string intervention::getnumber()
{
  return number;
}
string intervention::getintervention()
{
return number;
}