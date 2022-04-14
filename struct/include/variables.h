#ifndef VARIABLES_H
#define VARIABLES_H

#include <iostream>
#include <string>


struct Attitude{
    std::string name;
    double yaw;
    double pitch;
    double roll;
};

void InitAttitude(Attitude*, std::string, double, double, double);
void DisplayAttitude(Attitude const &);
void VariablesFunctions();

#endif