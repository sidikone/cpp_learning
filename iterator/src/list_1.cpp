#include "list_1.h"
using  namespace std;

void set_function_list_by_pointers(std::list <int>* ptr_data_in, const int init_in){

    cout << "\t ------------------- Set List Pointers ------------------- \t\t" << endl;
    int var = init_in;
    for(int i=0; i<10; i++){
        ptr_data_in->push_back(var++);
        }
    cout << endl;

}

void set_function_list_by_pointers_bis(std::list <int>* ptr_data_in, const int init_in){

    cout << "\t ------------------- Set List Bis Pointers ------------------- \t\t" << endl;
    int var = init_in;
    list<int>::iterator it;

    for (it = ptr_data_in->begin(); it != ptr_data_in->end(); it++){
        *it = var++;
    }

    cout << endl;

}

void display_function_list_by_constant_reference(const std::list <int>& ref_data_in){
    
    cout << "\t ------------------- Display Constant List Reference ------------------- \t" << endl;
    list<int>::const_iterator it;
    for (it = ref_data_in.begin(); it != ref_data_in.end(); it++){
        cout << *it << "\t";
    }
    cout << endl;
}

void ListFunctions(){

    const int siz_value = 10;
    int init = 30;

// List 
    list <int> list_1;
    // list <int> list_1 (siz_value, 0);
    list <int>* ptr_list_1 {&list_1};

    list <int> list_1_bis (siz_value, 0);
    list <int>* ptr_list_1_bis {&list_1_bis};

    list <int> list_2;
    list <int>* ptr_list_2 {&list_2};
    
    set_function_list_by_pointers(ptr_list_1, init);
    set_function_list_by_pointers_bis(ptr_list_1_bis, init+1);
    // set_function_list_by_pointers_bis(ptr_vect_2, init, siz_value);
    display_function_list_by_constant_reference(list_1);
    display_function_list_by_constant_reference(list_1_bis);

}