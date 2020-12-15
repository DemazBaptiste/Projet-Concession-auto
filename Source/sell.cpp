#include "../lib/sell.hpp"

sell_op::sell_op(){
  number = "0000" ;
}
sell_op::sell_op(string n){
  number = n;
}
void sell_op::printnumber(){
  cout <<"id de la vente : "<<number<<"\n";
}

void sell_op::setnumber(string n)
{
  cin>>n;
  number = n ;
}
string sell_op::getnumber()
{
  return number;
}
string sell_op::getSell()
{
return sell;
}