#include <string>
#include "../lib/Seller.hpp"
#include"../lib/Employee.hpp"

Seller::Seller(string f, string l, string d){
  string q = "s";
  Employee(f, l, d, q);
}

void Seller::sell(string idCustomer, string idCar){
  //TODO create corresponding Call_out;
}
void Seller::write_syntax(){
  Human::write_syntax();
  cout << "ID Vendeur : " << idEmployee << "\n";
}