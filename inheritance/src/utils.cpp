#include "auto.h" // Include the full definition of AUTO to access private members
#include "utils.h"
using namespace std;

namespace Utils {
    // Definition of the friend function
    void display_vehicle_info(Auto const &  auto_obj){
        cout << "Brand : " << auto_obj.m_brand  << "\t Model : " << auto_obj.m_model << endl;
    }
}

