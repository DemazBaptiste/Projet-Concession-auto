#include <iostream>
#include <vector>
#include <string>
using namespace std;

class car 
{
  private:
		string brand;
		string model;
		double price;
    string id;

  public:
    car();
		~car();
    car(string ,string );
    void setbrand(string _brand);
		string getbrand();
		void setmodel(string _brand);
		string getmodel();
    void setid(string name);
    string getid();
		void setprice(float _price);
    float getprice();
		void printcar();
};
