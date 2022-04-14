#ifndef ALIAS_1_H
#define ALIAS_1_H

#include <iostream>
#include <string>


struct Attitude{
    std::string name;
    double yaw;
    double pitch;
    double roll;
};

typedef Attitude Att;
typedef Attitude* AttPtr;

void InitAttitude(Attitude*, std::string, double, double, double);
void DisplayAttitude(Attitude const &);
void VariablesFunctions();

#endif