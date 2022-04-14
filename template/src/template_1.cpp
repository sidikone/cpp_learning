#include "template_1.h"
using namespace std;

void MainFunctions(){

    const int siz_value = 10;
    int init = 30;

// Vector 
    vector <int> vect_1 (siz_value, 0);
    vector <int>* ptr_vect_1 {&vect_1};
// Array
    array<int, siz_value> arr_1;
    array <int, siz_value>* ptr_arr_1 {&arr_1};

    set_function_vector_by_pointers(ptr_vect_1, init);

    ptr_arr_1->fill(0);
    set_function_array_by_pointers(ptr_arr_1, init+10);

    // display_function_vector_by_constant_reference(vect_1);
    // display_function_array_by_constant_reference(arr_1);

    display_using_constant_reference(vect_1);
    display_using_constant_reference(arr_1);

    display_using_constant_reference_bis(vect_1);
    display_using_constant_reference_bis(arr_1);
}