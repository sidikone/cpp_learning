#include "dyn_mem.h"
using namespace std;

void function_1(){

    int* ptr_in;
    ptr_in = new int;
    *ptr_in = 45;

    int* ptr_in_2 = new int;
    *ptr_in_2 = 60;

    cout << "\t in_1 = " << *ptr_in << "\t in_2 = " << *ptr_in_2 << endl;

    delete ptr_in;
    delete ptr_in_2;
}

void function_2(){
    int num;

    cout << "Enter the total numbers of marks\n" << endl;
    cin >> num;
    int* ptr_in = new int[num];

    cout << "Enter the marks of students" << endl;
    for (int i=0; i<num; ++i){
        cout << "Student " << i+1 << " : ";
        cin >> *(ptr_in+i); 
    }
    
    cout << "\n Display the students marks\n" << endl;
    for (int i=0; i<num; ++i){
        cout << "Student " << i+1 << " : " << *(ptr_in+i) << endl; 
    }
    delete[] ptr_in;
}

void function_3(){
    int num;

    cout << "Enter the total numbers of marks\n" << endl;
    cin >> num;
    vector<int>* ptr_in = new vector<int>;

    int temp_var;

    cout << "Enter the marks of students" << endl;
    for (int i=0; i<num; ++i){
        cout << "Student " << i+1 << " : ";
        cin >> temp_var;
        ptr_in->push_back(temp_var);

    }
    
    cout << "\n Display the students marks\n" << endl;
    for (int i=0; i<num; ++i){
        cout << "Student " << i+1 << " : " << ptr_in->at(i) << endl; 
    }
    delete ptr_in;
}


void MainFunctions(){

    // function_1();
    // function_2();
    function_3();

    // VectorFunctions();
}