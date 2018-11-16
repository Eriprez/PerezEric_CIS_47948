//Gaddis_8th_Chapter#2_Problem#3_SalesTax
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
    double mealcost=88.67;
    double tax=.0675;
    double tip=.20*(mealcost*tax+mealcost);
    double totalbill=tip+(mealcost*tax+mealcost);
    cout<<"meal cost: "<<mealcost<<endl;
    cout<<"tax: "<<tax<<endl;
    cout<<"tip: "<<tip<<endl;
    cout<<"total bill: "<<totalbill<<endl;


    return 0;
}

