#ifndef ARRAY_1_H
#define ARRAY_1_H

#include <array>
#include <iostream>

const int SIZ_VAL = 10;

void set_function_array_by_pointers(std::array <int, SIZ_VAL>*, const int);
void display_function_array_by_constant_reference(const std::array <int, SIZ_VAL>&);

void ArrayFunctions();

#endif
