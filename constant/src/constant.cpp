#include "constant.h"

void TestFunctions(){

// classic constant
    const float var_1 {2.3};
    float const var_1_bis {3.2};

    const char letter_1 {'a'};
    char const letter_2 = 'c';

    cout << "var 1 = "<< var_1 << endl;
    cout << "var 2 = "<< var_1_bis << endl;
    cout << "letter 1 = "<< letter_1 << endl;
    cout << "letter 2 = "<< letter_2 << endl;

// constexpr evalue en à la compilation

    constexpr double var_3 = 1.5 * 20;
    cout << "var 3 = " << var_3 << endl;


}
