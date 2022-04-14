#include "namespace_1.h"

using namespace std;

void VariablesFunctions(){

    Attitude att_1;
    Attitude* ptr_att_1 {&att_1};

    Att att_2;
    AttPtr ptr_att_2 {&att_2};

    LibAttitude::InitAttitude(ptr_att_1, "point_1", 15.0, 20.0, 30.0);
    LibAttitude::DisplayAttitude(att_1);

    cout << endl;
    LibAttitude::InitAttitude(ptr_att_2, "point_2", 50, 25, 0);
    LibAttitude::DisplayAttitude(att_2);
}


namespace LibAttitude {

    void InitAttitude(Attitude* ptr_data_in, std::string name_in, double yaw_in, double pitch_in, double roll_in){
        ptr_data_in->name = name_in;
        ptr_data_in->yaw = yaw_in;
        ptr_data_in->pitch = pitch_in;
        ptr_data_in->roll = roll_in;
    }

    void DisplayAttitude(Attitude const & data_in){
        cout <<"Name : "<< data_in.name << endl;
        cout <<"Yaw = "<< data_in.yaw << endl;
        cout <<"Pitch = "<< data_in.pitch << endl;
        cout <<"Roll = "<< data_in.roll << endl;
    }

}
