#include "reference.h"

void TestFunctions(){

// Pointers on variables
// 1. Classic declaration and affectation
    int var {25};
    int& var_p = var;

    cout <<"Var value is "<< var  << endl;
    cout << "Var adresse is " << &var_p <<"\n"<< endl;

    var_p = 88;
    cout <<"The new var value is access by its adress "<< var_p <<"\n"<< endl;

// 2. Constant reference
    int var_c {30};
    int const & var_cp  {var_c};

    cout <<"Var value is "<< var_c  << endl;
    cout << "Var is accessed by const adress " << var_cp <<"\n"<< endl;

    var_c = 20;
    cout <<"The new Var is accessed by const adress "<< var_cp <<"\n"<< endl;



// 3. Pointers et tableau

    int table[] = {1, 2, 3, 4, 5};
    int* table_p = table;           // the name of table is a reference by itself
    int siz_i = sizeof(table)/sizeof(*table);

    for (int i=0; i<siz_i; i++) cout << *(table_p+i) << "\t";
    cout << "\n\n";

// 4. Const pointers

    const double var_dble {3.2};
    const double * var_dble_pt = & var_dble; 

    cout <<"The variable and the pointers are both constants "<< *var_dble_pt <<"\n"<< endl;

    double var_dble_2 {5.3};
    const double * var_dble_pt_2 {& var_dble_2}; 

    cout <<"The variable is not constent but the pointers is constant "<< *var_dble_pt_2 <<"\n"<< endl;

    var_dble_2 = 7.2;
    cout <<"We change the pointers adress "<< *var_dble_pt_2 <<"\n"<< endl;
    // Mais on ne peut pas changer la valeur de la variable sur laquelle il pointe du fait de sa nature constante

}
