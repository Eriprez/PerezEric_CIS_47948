//Gaddis Chapter 4 Problem 7
//Time Calculator
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    double seconds;
    cout<<"Enter a number of seconds."<<endl;
    cin>>seconds;
    if(seconds>=60){
        cout<<seconds/60<<" minute(s)";
    }
    else if(seconds>=3600){
        cout<<seconds/3600<<" hour(s)";
    }
    else if(seconds>=86400){
        cout<<seconds/86400<<" day(s)";
    }
    return 0;
}

