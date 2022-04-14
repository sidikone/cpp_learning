#include "vector_1.h"
using namespace std;


void set_function_vector_by_pointers(std::vector <int>* ptr_data_in, const int var_in){

    cout << "\t ------------------- Set Vector Pointers ------------------- \t\t" << endl;

    // for(int i=0; i<ptr_data_in->size(); i++) cout << ptr_data_in->at(i) << "\t";
    // for(int i=0; i<ptr_data_in->size(); i++) cout << (*ptr_data_in)[i] << "\t";
    // for(int i=0; i<ptr_data_in->size(); i++) cout << (*ptr_data_in).at(i) << "\t";

    int var = var_in;
    for(int i=0; i<ptr_data_in->size(); i++){
        ptr_data_in->at(i) = var++;
        }
    cout << endl;
}

std::vector <int> set_function_vector_by_pointers_with_return(const int init_in, const int siz_in){

    cout << "\t ------------------- Set Vector Pointers With Return ------------------- \t\t" << endl;
    vector <int> vect_in;
    vector <int>* ptr_vect_in {&vect_in};

    int var = init_in;
    for(int i=0; i<siz_in; i++){
        ptr_vect_in->push_back(var++);
        }
    
    cout << endl;
    return vect_in;
}

void set_function_vector_by_pointers_bis(std::vector <int>* ptr_data_in, const int init_in, const int siz_in){

    cout << "\t ------------------- Set Vector Pointers Bis ------------------- \t\t" << endl;

    int var = init_in;
    for(int i=0; i<siz_in; i++){
        ptr_data_in->push_back(var++);
        }
    cout << endl;
}

void display_function_vector_by_constant_reference(const std::vector <int>& ref_data_in){
    
    cout << "\t ------------------- Display Constant Vector Reference ------------------- \t" << endl;
    for(int i=0; i<ref_data_in.size(); i++) cout << ref_data_in.at(i) << "\t";
    cout <<endl;
}


void VectorFunctions(){

    const int siz_value = 10;
    int init = 30;


// Vector 
    vector <int> vect_1 (siz_value, 0);
    vector <int>* ptr_vect_1 {&vect_1};

    vector <int> vect_1_bis;
    vector <int>* ptr_vect_1_bis {&vect_1_bis};

    vector <int> vect_2;
    vector <int>* ptr_vect_2 {&vect_2};
    
    set_function_vector_by_pointers(ptr_vect_1, init);
    set_function_vector_by_pointers_bis(ptr_vect_2, init, siz_value);
    vect_1_bis = set_function_vector_by_pointers_with_return(init, siz_value);

    display_function_vector_by_constant_reference(vect_1);
    display_function_vector_by_constant_reference(vect_2);
    display_function_vector_by_constant_reference(vect_1_bis);

}
