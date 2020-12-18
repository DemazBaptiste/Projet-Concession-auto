#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car 
{
  private:
		string brand;
		string model;
		double price;
    string id;

  public:
<<<<<<< HEAD
    Car();
		~Car();
    Car(string ,string );
    void setbrand(string brand);
=======
    car();
		~car();
    car(string ,string );
    void setbrand(string _brand);
>>>>>>> d64569cf3874f86bb392288d4ccb1ee2cad2110f
		string getbrand();
		void setmodel(string _brand);
		string getmodel();
    void setid(string name);
    string getid();
<<<<<<< HEAD
		void setprice(double price);
    string getprice();
		void printCar();
=======
		void setprice(float _price);
    float getprice();
		void printcar();
>>>>>>> d64569cf3874f86bb392288d4ccb1ee2cad2110f
};
