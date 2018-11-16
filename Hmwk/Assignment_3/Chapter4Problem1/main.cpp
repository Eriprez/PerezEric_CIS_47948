//Eric Perez
//Gaddis Chapter 4
//Problem 1 Min/max
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Enter two numbers"<<endl;
    int num1,num2;
    cin>>num1;
    cin>>num2;
    if(num1>num2){
        cout<<"The first number you entered is larger than the second"<<endl;
    }
    else if(num2>num1)
        cout<<"The second number you entered is larger than the first"<<endl;
    else
        cout<<"Neither number is larger";
    return 0;
}

