#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
# include <string>

class Auto; //forward declaration

class Display{

public:

    Display();
    void display_info_vehicle(Auto const & auto_obj);

private:
    std::string m_displ;

};

#endif //DISPLAY_H