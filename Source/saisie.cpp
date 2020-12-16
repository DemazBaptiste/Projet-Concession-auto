/*string j1;

do{
		clear_buffer();
		cout << "\nNom joueur 1 :";
		getline(cin >> ws, j1);
	}while(cin.fail() || j1.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ") != string::npos);
	

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
}*/