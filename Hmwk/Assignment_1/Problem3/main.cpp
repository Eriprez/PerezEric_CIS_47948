//Gaddis_8th_Chapter#2_Problem#3_SalesTax


#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double statetax=.04;
    double countrytax=.02;
    double purchase=95;
    double totaltax=countrytax*95+statetax*95;
    cout<< totaltax;
    return 0;
}

