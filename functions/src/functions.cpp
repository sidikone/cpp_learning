#include "functions.h"

using namespace std;

// =========================================================================
void display_functions_1(float data_in[], const int siz){
    for (int ind=0; ind<siz; ind++) cout << data_in[ind] << "\t";
    data_in[0] = 0;
    cout << endl;
}

void display_functions_2(float data_in[], const int siz){
    for (int i=0; i<siz; i++) cout << *(data_in+i) << "\t";
    cout << "\n";
}

void display_functions_3(float* data_in, const int siz){
    for (int i=0; i<siz; i++) cout << *(data_in+i) << "\t";
    cout << "\n";
    for (int i =0; i<siz/2; i++) *(data_in+i) = 0;
}

void display_functions_4(const float* data_in, const int siz){
    for (int i=0; i<siz; i++) cout << *(data_in+i) << "\t";
    cout << "\n\n";
}

// =========================================================================


void display_function_vector_by_value(std::vector <int> data_in){
    for(int& elt : data_in) cout << elt << "\t";
}

void display_function_vector_by_pointers(std::vector <int>* ptr_data_in){
    
    cout <<"\n"<< endl;
    cout << "\t\t\t ------------------- Pointers ------------------- \t\t" << endl;
    for(int i=0; i<ptr_data_in->size(); i++) cout << ptr_data_in->at(i) << "\t";
    cout <<endl;

    for(int i=0; i<ptr_data_in->size(); i++) cout << (*ptr_data_in).at(i) << "\t";
    cout <<endl;

    for(int i=0; i<ptr_data_in->size(); i++) cout << (*ptr_data_in)[i] << "\t";
    cout <<"\n";
    cout << "\t\t\t ------------------- Pointers ------------------- \t\t" << endl;
    cout <<endl;
}

void display_function_vector_by_reference(std::vector <int>& ref_data_in){
    
    cout <<"\n"<< endl;
    cout << "\t\t\t ------------------- Reference ------------------- \t\t" << endl;
    for(int i=0; i<ref_data_in.size(); i++) cout << ref_data_in.at(i) << "\t";
    cout <<endl;

    for(int i=0; i<ref_data_in.size(); i++) cout << ref_data_in[i] << "\t";
    cout <<endl;

    cout << "\t\t\t ------------------- Reference ------------------- \t\t" << endl;
    cout <<endl;
}

void display_function_vector_by_constant_reference(const std::vector <int>& ref_data_in){
    
    cout <<"\n"<< endl;
    cout << "\t ------------------- Constant Reference ------------------- \t\t" << endl;
    for(int i=0; i<ref_data_in.size(); i++) cout << ref_data_in.at(i) << "\t";
    cout <<endl;


    for(int i=0; i<ref_data_in.size(); i++) cout << ref_data_in[i] << "\t";
    cout <<endl;

    cout << "\t ------------------- Constant Reference ------------------- \t\t" << endl;
    cout <<endl;
}



void TestFunctions(){

    const int siz_value = 10; 
    float my_table [siz_value];
    
    int var = 0;
    for (float& elt : my_table) {
        elt = ++var;}

    int siz_i = sizeof(my_table)/sizeof(*my_table);

    display_functions_1(my_table, siz_i);
    display_functions_2(my_table, siz_i);
    display_functions_3(my_table, siz_i);
    display_functions_4(my_table, siz_i);

    int val = 0;
    vector <int> vect_1;
    vector <int>* ptr_vect_1 {&vect_1};
    vect_1.reserve(siz_value);
    for (int ind=0; ind <10; ind++) vect_1.push_back(ind+5);

    display_function_vector_by_value(vect_1);
    cout<<endl;
    display_function_vector_by_pointers(&vect_1);
    display_function_vector_by_pointers(ptr_vect_1);
    display_function_vector_by_reference(vect_1);
    display_function_vector_by_constant_reference(vect_1);


}
