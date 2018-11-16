/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose:Minimum/Maximum
 */

//System Libraries Here
#include <iostream> //I/O Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int num1,num2;
    
    //Input or initialize values Here
    cout<<"Enter two numbers"<<endl;
    cin>>num1;//Input 1 
    cin>>num2;//Input 2
    
    //Process/Calculations Here
    if(num1>num2){
        cout<<"The first number you entered is larger than the second"<<endl;
    }
    else if(num2>num1)
        cout<<"The second number you entered is larger than the first"<<endl;
    else
        cout<<"Neither number is larger";
    
    //Exit
    return 0;
}

