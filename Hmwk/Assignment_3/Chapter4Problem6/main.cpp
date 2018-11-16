//Gaddis Chapter 4 Problems 6
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    double weight;
    double mass;
    cout<<"Enter the mass of an object in kg"<<endl;
    cin>>mass;
    weight=mass*9.8;
    if(weight<10){
        cout<<"The object is too light"<<endl;
    }
    else if(weight>1000){
        cout<<"The object is too heavy"<<endl;
    }
    return 0;
}

