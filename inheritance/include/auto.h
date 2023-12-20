#ifndef AUTO_H
#define AUTO_H

#include <iostream>
#include <string>

#include "display.h"
#include "utils.h"

class Auto{

public:

    Auto();
    Auto (std::string, std::string);
    Auto(std::string, std::string, std::string, int);
    Auto(Auto const &); // copie constructor 

    friend void Utils::display_vehicle_info(Auto const &);
    friend void Display::display_info_vehicle(Auto const &) const;

private:
    std::string m_brand;
    std::string m_model;
    std::string m_condition;
    int m_year;

};

#endif // AUTO