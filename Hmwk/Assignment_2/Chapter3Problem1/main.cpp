//Perez, Eric 
//Chapter 3 Gaddis
#include <iostream>

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double gallon;
    double range;
   
    cout<<"Enter the number of gallons your car can hold"<<endl;
    std::cin>>gallon;
    cout<<"Enter the number of miles your can be driven on a full tank of gas"<<endl;
    std::cin>>range;
     double mpg=(range/gallon);
    cout<<"The mpg of your car is "<<mpg<<" mile per gallon"<<endl;
    
    return 0;
}

