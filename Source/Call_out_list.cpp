#include "../lib/Call_out_list.hpp"
#include <vector>

Call_out_list::Call_out_list()
{

}

Call_out_list::~Call_out_list()
{

}

void Call_out_list::add_Call_out_to_list(Call_out myCall_out)
{
  membres.push_back(myCall_out);
}

void Call_out_list::remove_Call_out_list()
{
  membres.pop_back();
}