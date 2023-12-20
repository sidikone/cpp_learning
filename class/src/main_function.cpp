#include "main_function.h"
#include "auto.h"
#include "display.h"

// #include "test_function.h"

using namespace std;

void MainFunctions(){

    Auto auto_obj;
    Auto auto_obj_1 ("nissan", "pulsar");
    Auto auto_obj_2 ("BMW", "430l", "used", 2022);
    Utils::display_vehicle_info(auto_obj_1);

    Display display_obj;
    display_obj.display_info_vehicle(auto_obj_2);

    // testfunction_in_out();
}