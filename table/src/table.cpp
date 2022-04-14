#include "table.h"

void TestFunctions(){

// Declaration et Initialisation 

    int table[] = {1, 2, 3, 4, 5};
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
