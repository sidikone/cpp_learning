#ifndef TEMPLATE_1_H
#define TEMPLATE_1_H

#include <iostream>

#include "vector_1.h"
#include "array_1.h"

template<typename type_in>
void display_using_constant_reference(const type_in & ref_data_in){
    std::cout << "\t --------- Display Constant Collection Reference ---------- \t" << std::endl;

    for (auto const & e : ref_data_in){
        std:: cout << e << "\t";
    }
    std::cout << std::endl;
}

template<typename type_in>
void display_using_constant_reference_bis(const type_in & ref_data_in){
    std::cout << "\t --------- Display Constant Collection Reference Using Iterator ---------- \t" << std::endl;

    for (auto it = std::begin(ref_data_in); it != std::end(ref_data_in); it++){
        std::cout << *it << "\t";    
    }
    std::cout << std::endl;
}

void MainFunctions();

#endif