#include <iostream>
#include <vector>
#include <string>
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

int Sous_menu()
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
      default:
      cout<<"Ecrivez Français et réessayez bande d'illettrés!!";
      Sous_menu();
      return 0;
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
        Sous_menu();

        break ;
      case 2 :
        Sous_menu();

        break;
      case 3 :
        Sous_menu();

        break;
      case 4 :
        Sous_menu();

        break;
      case 5 :
        Sous_menu();

        break;
      default :
        cout<<"Ecrivez Français et réessayez bande d'illettrés!!";
        if (choiceMenu < 0 && choiceMenu > 5){
          Menu1();
        }
        else
          return 84;
    }
    return 0;
}

int main()

{
Menu1();
return 0;
}