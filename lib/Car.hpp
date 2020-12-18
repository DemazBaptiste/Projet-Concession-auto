#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car 
{
  private:
		string brand;
		string model;
		float price;
    string id;

  public:
    Car();
		~Car();
    Car(string ,string );
    void setbrand(string brand);
		string getbrand();
		void setmodel(string _brand);
		string getmodel();
    void setid(string name);
    string getid();
		void setprice(float _price);
    float getprice();
		void printCar();
};
