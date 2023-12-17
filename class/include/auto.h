#ifndef AUTO_H
#define AUTO_H

#include <iostream>
#include <string>

#include "utils.h"

class Auto{

public:
    Auto();
    Auto (std::string, std::string);
    Auto(std::string, std::string, std::string, int);
    friend void Utils::display_vehicle_info(Auto const &);

private:
    std::string m_brand;
    std::string m_model;
    std::string m_condition;
    int m_year;

};

#endif // AUTO