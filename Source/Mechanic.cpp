#include "../lib/Mechanic.hpp"
#include"../lib/Employee.hpp"
#include <string>

Mechanic::Mechanic(string f, string l , string d){
  string q = "m";
  Employee(f, l, d, q);
}
void Mechanic::repair(string idCustomer, string idCar){
  //TODO create corresponding Call_out;
}
void Mechanic::write_syntax(){
  Human::write_syntax();
  cout << "ID Garagiste : " << idEmployee << "\n";
}