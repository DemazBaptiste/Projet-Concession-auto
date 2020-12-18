#include <iostream>
#include <vector>
#include <string>
#include "Call_out.hpp"
using namespace std;

class Call_out_list
{
  public:
  Call_out_list();
  ~Call_out_list();
  void add_customer_to_list(Call_out);
  void remove_customer_list();
  void Look_tab();
  vector <Call_out> membres;

  private:

};