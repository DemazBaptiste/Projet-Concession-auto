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
    Car();
		~Car();
    Car(string ,string );
    void setbrand(string brand);
		string getbrand();
		void setmodel(string brand);
		string getmodel();
    void setid(string name);
    string getid();
		void setprice(double price);
    string getprice();
		void printCar();
};
