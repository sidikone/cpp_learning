#ifndef VECTOR_1_H
#define VECTOR_1_H

#include <vector>
#include <iostream>

void set_function_vector_by_pointers(std::vector <int>*, const int);
std::vector <int> set_function_vector_by_pointers_with_return(const int, const int);
void set_function_vector_by_pointers_bis(std::vector <int>*, const int, const int);
void display_function_vector_by_constant_reference(const std::vector <int>&);

void VectorFunctions();

#endif