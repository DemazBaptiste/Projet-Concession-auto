#include <iostream>
#include <string>
#include"../lib/Human.hpp"
#include"../lib/Employee.hpp"


Employee::Employee(string f, string l, string d, string q){
    int x; //TODO
    Human(f, l, d);
    idEmployee = q + to_string(x);
}

void Employee::write_syntax(){

}