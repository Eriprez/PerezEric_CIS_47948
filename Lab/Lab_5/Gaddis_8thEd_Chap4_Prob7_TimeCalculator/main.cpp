/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Time Calculator
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
    float seconds;
    
    //Input or initialize values Here
    cout<<"Enter a number of seconds."<<endl;
    cin>>seconds;
    
    //Process/Calculations Here
    if(seconds>=60){
        cout<<seconds/60<<" minute(s)";
    }
    else if(seconds>=3600){
        cout<<seconds/3600<<" hour(s)";
    }
    else if(seconds>=86400){
        cout<<seconds/86400<<" day(s)";
    }
    
    //Exit
    return 0;
}

