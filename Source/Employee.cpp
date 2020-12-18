#include <iostream>
#include <string>
#include"../lib/Human.hpp"
#include"../lib/Employee.hpp"
#include"../lib/Employee_list.hpp"


Employee::Employee(string f, string l, string d, string q){
    Human(f, l, d);
    int x = 0;
    do{
        x = x+1;
        idEmployee = q + to_string(x);
    }while(already_exist(idEmployee))
}

void Employee::write_syntax(){

}

int already_exist(Employee_list el, string id )
{
    for (int i = 0; i < el.size(); i++){
        if(el[i].idEmployee == id){
            return 1
        }
    }
    return 0;
}