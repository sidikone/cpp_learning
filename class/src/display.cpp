#include "auto.h" // Include the full definition of AUTO to access private members
#include "display.h"
using namespace std;

Display::Display(){cout << "Hello Word" << endl;}

void Display::display_info_vehicle(Auto const & auto_obj){

    cout << "Brand : " << auto_obj.m_brand  << "\t Model : " << auto_obj.m_model << endl;

}