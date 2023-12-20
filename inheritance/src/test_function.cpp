#include "test_function.h"
using namespace std;

void testfunction(){

    int* ptr_in;
    ptr_in = new int;
    *ptr_in = 45;

    int* ptr_in_2 = new int;
    *ptr_in_2 = 60;

    cout << "\t in_1 = " << *ptr_in << "\t in_2 = " << *ptr_in_2 << endl;

    delete ptr_in;
    delete ptr_in_2;
}

void testfunction_in_out(){
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