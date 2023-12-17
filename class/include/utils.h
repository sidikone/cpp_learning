#ifndef UTILS_H
#define UTILS_H

#include <iostream>

// namespace Utils {
//     void display_vehicle_info();
// }

class Auto; // forward declaration
namespace Utils {
    void display_vehicle_info(Auto const & auto_obj);
}


#endif // UTILS