#ifndef LIST_1_H
#define LIST_1_H

#include <list>
#include <iostream>

void set_function_list_by_pointers(std::list <int>*, const int);
void set_function_list_by_pointers_bis(std::list <int>*, const int);
void display_function_list_by_constant_reference(const std::list <int>&);

void ListFunctions();

#endif