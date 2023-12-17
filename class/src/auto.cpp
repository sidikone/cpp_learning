#include "auto.h"
using namespace std;

Auto::Auto(){}
Auto::Auto (string brand, string model):m_brand(brand),m_model(model){};
Auto::Auto(string brand, string model, string condition, int year){
    
    this->m_brand = brand;
    this->m_model = model;
    this->m_condition = condition;
    this->m_year = year;
    // cout << "Brand : " << this->m_brand  << "\t Model : " << this->m_model << endl;
}