#include <iostream>
#include <vector>
#include <string>
using namespace std;



int Sous_menu()
{
  int choiceMenu2; //variable stockant le choix sous menu

    std::cout<<"\n-----SOUS-MENU-----\n"<<"Choice 1 : Modifier\n"<<"Choice 2 : Ajouter \n"<<"Choice 3 : Supprimer \n"<<"Choice 4 : Liste\n"<<"Votre choix ?\n";

    cin>>choiceMenu2;
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
      std::cout<<"\n-----MENU-----\n"<<"Choice 1 : stock\n"<<"Choice 2 : Ventes \n"<<"Choice 3 : Employés \n"<<"Choice 4 : réparations\n"<<"Choice 5 : Clients\n"<<"Votre choix ?\n";


      cin>>choiceMenu;
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