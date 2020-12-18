#include "../lib/Human.hpp"
#include "../lib/Customer.hpp"
#include "../lib/all_list.hpp"

Customer::Customer(){
    //Human(f, l, d);
    //TODO set idCustomer
    Human();
}
Customer::Customer(string f, string l, string d){
    Human(f, l, d);
    int x = 0;
    do{
        x = x+1;
        idEmployee = "c" + to_string(x);
    }while(already_exist(all_customer, idCustomer))
}

Customer::~Customer()
{

}

int already_exist(Customer_list ac, string id )
{
    for (int i = 0; i < ac.membres.size(); i++){
        if(ac.membres[i].idCustomer == id){
            return 1;
        }
    }
    return 0;
}