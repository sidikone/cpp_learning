#include "pointers.h"

void TestFunctions(){

    unique_ptr <vector <int>> vect_Ptr (new vector<int>);
    unique_ptr <vector <int>> vect_Ptr_2;

    int var = 10;

    for (int i=0; i<10; i++){
        vect_Ptr->push_back(var+=5);
    }

    for (auto it = vect_Ptr->begin(); it != vect_Ptr->end(); it++){
        cout << *it << "  ";
    }

    vect_Ptr_2 = move(vect_Ptr);

    cout << "\n\nMove Point\n" << endl;
    for (auto it = vect_Ptr_2->begin(); it != vect_Ptr_2->end(); it++){
        cout << *it << "  ";
    }
    cout << endl;
}

void TestFunctions_bis(){

    shared_ptr <vector <int>> vect_Ptr (new vector<int>);
    shared_ptr <vector <int>> vect_Ptr_2;

    int var = 20;

    for (int i=0; i<10; i++){
        vect_Ptr->push_back(var+=5);
    }

    for (auto it = vect_Ptr->begin(); it != vect_Ptr->end(); it++){
        cout << *it << "  ";
    }

    vect_Ptr_2 = vect_Ptr;

    cout << "\n\nShared Point\n" << endl;
    for (auto it = vect_Ptr_2->begin(); it != vect_Ptr_2->end(); it++){
        cout << *it << "  ";
    }

    cout <<"\n"<< vect_Ptr.use_count() << "\t" << vect_Ptr_2.use_count() << endl; 
}
