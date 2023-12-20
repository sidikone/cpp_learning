#include "auto.h"
using namespace std;

Auto::Auto(){}
Auto::Auto(string brand, string model):m_brand(brand),m_model(model){}
Auto::Auto(string brand, string model, string condition, int year){
    
    this->m_brand = brand;
    this->m_model = model;
    this->m_condition = condition;
    this->m_year = year;
    // cout << "Brand : " << this->m_brand  << "\t Model : " << this->m_model << endl;
}

Auto::Auto(Auto const & auto_obj){
    
    this->m_brand = auto_obj.m_brand;
    this->m_model = auto_obj.m_model;
    this->m_condition = auto_obj.m_condition;
    this->m_year = auto_obj.m_year;
}