#include "pointers.h"

void TestFunctions(){

// Pointers on variables
// 1. Classic declaration and affectation
    int var {25};
    int* var_p = &var;

    cout <<"Var value is "<< var  << endl;
    cout << "Var adresse is " << var_p <<"\n"<< endl;

    *var_p = 88;
    cout <<"The new var value is "<< *var_p <<"\n"<< endl;

// 2. Declaration with a null pointers

    float var_f {52};
    float* var_fp = nullptr;
    var_fp = &var_f;
    cout <<"Var_f value is "<< *var_fp  <<"\n"<<endl;

// 3. Pointers et tableau

    int table[] = {1, 2, 3, 4, 5};
    int* table_p = table;
    int siz_i = sizeof(table)/sizeof(*table);

    for (int i=0; i<siz_i; i++) cout << *(table_p+i) << "\t";
    cout << "\n\n";

// 4. Const pointers

    const double var_dble {3.2};
    const double * var_dble_pt = & var_dble; 

    cout <<"The variable and the pointers are both constants "<< *var_dble_pt <<"\n"<< endl;

    double var_dble_2 {5.3};
    const double * var_dble_pt_2 = & var_dble_2; 

    cout <<"The variable is not constent but the pointers is constant "<< *var_dble_pt_2 <<"\n"<< endl;

    var_dble_pt_2 = var_dble_pt;
    cout <<"We change the pointers adress "<< *var_dble_pt_2 <<"\n"<< endl;
    // Mais on ne peut pas changer la valeur de la variable sur laquelle il pointe du fait de sa nature constante

    int siz_1 = sizeof(table)/sizeof(table[0]);
    int siz_2 = sizeof(table)/sizeof(*table);
    cout <<"The table size is "<< siz_1 << endl;
    cout <<"The other table size is "<< siz_2 << endl;

// Declaration, puis initialisation

    const int size_value {4};
    float table_2 [size_value];
    for (int i=0; i<size_value; i++) table_2[i] = size_value-i;
    for (int i=0; i<size_value; i++) cout << table_2[i] << "\t";
    cout << endl;

// Tableau de caractere

    char table_3 [size_value];
    for (int i=0; i<size_value; i++) table_3[i] = 'a';
    for (int i=0; i<size_value; i++) cout << table_3[i] << "\t";
    cout << endl;

    char table_4 [] = "macarena";
    int siz_3 = sizeof(table_4)/sizeof(*table_4);
    for (int i=0; i<siz_3; i++) cout << table_4[i];
    cout << endl;

    char const table_5 [] = "guadeloupe";
    for (const char& elt : table_5) cout <<elt << " ";
    cout << endl;

// All element value

    cout << "all element are " << table_5 << endl;

// Single element value

    cout << "second element is " << *(table_5+1) << endl;

}
