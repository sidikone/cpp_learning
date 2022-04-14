#include "array_1.h"
using namespace std;

void set_function_array_by_pointers(std::array <int, SIZ_VAL>* ptr_data_in, const int var_in){

    cout << "\t ------------------- Set Array Pointers ------------------- \t\t" << endl;

    // for(int i=0; i<ptr_data_in->size(); i++) cout << ptr_data_in->at(i) << "\t";
    // for(int i=0; i<ptr_data_in->size(); i++) cout << (*ptr_data_in)[i] << "\t";
    // for(int i=0; i<ptr_data_in->size(); i++) cout << (*ptr_data_in).at(i) << "\t";

    int var = var_in;
    for(int i=0; i<ptr_data_in->size(); i++){
        ptr_data_in->at(i) = var++;
        }
    cout << endl;
}

void display_function_array_by_constant_reference(const std::array <int, SIZ_VAL>& ref_data_in){
    
    cout << "\t ------------------- Display Constant Array Reference ------------------- \t" << endl;
    for(int i=0; i<ref_data_in.size(); i++) cout << ref_data_in.at(i) << "\t";
    cout <<endl;
}

void ArrayFunctions(){

    const int siz_value = 10;
    int init = 40;

// Array
    array<int, siz_value> arr_1;
    array <int, siz_value>* ptr_arr_1 {&arr_1};
    ptr_arr_1->fill(0);

    set_function_array_by_pointers(ptr_arr_1, init);
    display_function_array_by_constant_reference(arr_1);


}