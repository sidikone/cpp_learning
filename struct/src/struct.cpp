#include "struct.h"
using namespace std;


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

void VariablesFunctions(){

    Attitude att_1;
    Attitude* ptr_att_1 {&att_1};
    InitAttitude(ptr_att_1, "point_1", 15.0, 20.0, 30.0);
    DisplayAttitude(att_1);
    
}

void VariablesFunctions_Dyn(){

    Attitude* ptr_att_1 = new Attitude;
    InitAttitude(ptr_att_1, "point_2", 25.0, 20.0, 30.0);
    DisplayAttitude(*ptr_att_1);
    delete ptr_att_1;
}

void VariablesFunctions_Ptr(){

    unique_ptr <Attitude> ptr_att_1 (new Attitude);
    InitAttitude(ptr_att_1.get(), "point_3", 35.0, 25.0, 60.0);
    DisplayAttitude(*ptr_att_1);
}