#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <iostream>

void display_function_1(float [], const int);
void display_function_2(float [], const int);
void display_function_3(float*, const int);
void display_function_4(const float*, const int);


void display_function_vector_by_value(std::vector <int>);
void display_function_vector_by_pointers(std::vector <int>*);
void display_function_vector_by_reference(std::vector <int>&);
void display_function_vector_by_constant_reference(const std::vector <int>&);

void TestFunctions();

#endif