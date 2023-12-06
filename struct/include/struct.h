#ifndef STRUCT_H
#define STRUCT_H

#include <iostream>
#include <string>
#include <memory>

struct Attitude{
    std::string name;
    double yaw;
    double pitch;
    double roll;
};

void InitAttitude(Attitude*, std::string, double, double, double);
void DisplayAttitude(Attitude const &);
void VariablesFunctions();
void VariablesFunctions_Dyn();
void VariablesFunctions_Ptr();


#endif