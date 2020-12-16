#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Call_out 
{
  private:
    string idCustomer;
		string idEmployee;
		string idCar;

  public:
    Call_out(string, string, string);

    void printCall_out();
};