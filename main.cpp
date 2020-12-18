#include <iostream>
#include <vector>
#include <string>
#include "lib/Customer.hpp"
#include "lib/all_list.hpp"
using namespace std;

void clear_buffer()
    {
    cin.clear();
    cin.seekg(0, ios::end);

    if(!cin.fail())
     {
        cin.ignore(numeric_limits<streamsize>::max()); // Le flux a déjà un état valide donc inutile de faire appel à clear()
     }
    else
    {
        cin.clear(); // Le flux est dans un état invalide donc on le remet en état valide
    }
}
void funct_disp()
{
  string tmp; // First name
  string tmp2; // Last name
  string tmp3; // Date

  cout << "First Name : ";
  cin >> tmp;
  cout << "Last Name :";
  cin >> tmp2;
  cout << "Date :";
  cin >> tmp3;

  Customer H1;
  H1.setFName(tmp);
  H1.setLName(tmp2);
  H1.setDate(tmp3);
  H1.write_syntax();
  all_customer.add_customer_to_list(H1);
  
}

int Sous_menu_customers()
{
  int choiceMenu2; //variable stockant le choix sous menu
 

    std::cout<<"\n-----SOUS-MENU-----\n"<<"Choice 1 : Modifier\n"<<"Choice 2 : Ajouter \n"<<"Choice 3 : Supprimer \n"<<"Choice 4 : Liste\n"<<"\n";

    string CHOIX;

    do{
		  clear_buffer();
		  cout << "\n VOTRE CHOIX ? :";
		  getline(cin >> ws, CHOIX);
	  }while(cin.fail() || CHOIX.find_first_not_of("1234") != string::npos);
      choiceMenu2=stoi(CHOIX);//transforme choix de string vers int
    switch(choiceMenu2)
    {
      case 1 :
        return 0;
        break ;
      case 2 :{
        funct_disp();
        break;
      }
      case 3 :
        return 0;
        break;
      case 4 :
        return 0;
        break;
    }
    return 0;
}

int Sous_menu_repair()
{
  int choiceMenu2; //variable stockant le choix sous menu

    std::cout<<"\n-----SOUS-MENU-----\n"<<"Choice 1 : Modifier\n"<<"Choice 2 : Ajouter \n"<<"Choice 3 : Supprimer \n"<<"Choice 4 : Liste\n"<<"\n";

    string CHOIX;

    do{
		  clear_buffer();
		  cout << "\n VOTRE CHOIX ? :";
		  getline(cin >> ws, CHOIX);
	  }while(cin.fail() || CHOIX.find_first_not_of("1234") != string::npos);
      choiceMenu2=stoi(CHOIX);//transforme choix de string vers int
    switch(choiceMenu2)
    {
      case 1 :

        break ;
      case 2 :

        break;
      case 3 :

        break;
      case 4 :

        break;
    }
    return 0;
}

int Sous_menu_sell()
{
  int choiceMenu2; //variable stockant le choix sous menu

    std::cout<<"\n-----SOUS-MENU-----\n"<<"Choice 1 : Modifier\n"<<"Choice 2 : Ajouter \n"<<"Choice 3 : Supprimer \n"<<"Choice 4 : Liste\n"<<"\n";

    string CHOIX;

    do{
		  clear_buffer();
		  cout << "\n VOTRE CHOIX ? :";
		  getline(cin >> ws, CHOIX);
	  }while(cin.fail() || CHOIX.find_first_not_of("1234") != string::npos);
      choiceMenu2=stoi(CHOIX);//transforme choix de string vers int
    switch(choiceMenu2)
    {
      case 1 :

        break ;
      case 2 :

        break;
      case 3 :

        break;
      case 4 :

        break;
    }
    return 0;
}

int Sous_menu_stock()
{
  int choiceMenu2; //variable stockant le choix sous menu

    std::cout<<"\n-----SOUS-MENU-----\n"<<"Choice 1 : Modifier\n"<<"Choice 2 : Ajouter \n"<<"Choice 3 : Supprimer \n"<<"Choice 4 : Liste\n"<<"\n";

    string CHOIX;

    do{
		  clear_buffer();
		  cout << "\n VOTRE CHOIX ? :";
		  getline(cin >> ws, CHOIX);
	  }while(cin.fail() || CHOIX.find_first_not_of("1234") != string::npos);
      choiceMenu2=stoi(CHOIX);//transforme choix de string vers int
    switch(choiceMenu2)
    {
      case 1 :

        break ;
      case 2 :

        break;
      case 3 :

        break;
      case 4 :

        break;
    }
    return 0;
}

int Sous_menu_employee()
{
  int choiceMenu2; //variable stockant le choix sous menu

    std::cout<<"\n-----SOUS-MENU-----\n"<<"Choice 1 : Modifier\n"<<"Choice 2 : Ajouter \n"<<"Choice 3 : Supprimer \n"<<"Choice 4 : Liste\n"<<"\n";

    string CHOIX;

    do{
		  clear_buffer();
		  cout << "\n VOTRE CHOIX ? :";
		  getline(cin >> ws, CHOIX);
	  }while(cin.fail() || CHOIX.find_first_not_of("1234") != string::npos);
      choiceMenu2=stoi(CHOIX);//transforme choix de string vers int
    switch(choiceMenu2)
    {
      case 1 :

        break ;
      case 2 :

        break;
      case 3 :

        break;
      case 4 :

        break;
    }
    return 0;
}

int Menu1()
{
  int choiceMenu;
      std::cout<<"\n-----MENU-----\n"<<"Choice 1 : stock\n"<<"Choice 2 : Ventes \n"<<"Choice 3 : Employés \n"<<"Choice 4 : réparations\n"<<"Choice 5 : Clients\n"<<"\n";


      string CHOIX;

    do{
		  clear_buffer();
		  cout << "\n VOTRE CHOIX ? :";
		  getline(cin >> ws, CHOIX);
	  }while(cin.fail() || CHOIX.find_first_not_of("12345") != string::npos);
      choiceMenu=stoi(CHOIX);//transforme choix de string vers int
    switch(choiceMenu)
    {
      case 1 :
        Sous_menu_stock();

        break ;
      case 2 :
        Sous_menu_sell();

        break;
      case 3 :
        Sous_menu_employee();

        break;
      case 4 :
        Sous_menu_repair();

        break;
      case 5 :
        Sous_menu_customers();

        break;
    }
    return 0;
}

int main()
{
Menu1();
return(0);
}
