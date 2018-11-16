/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Mass and Weight
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
    float weight;
    float mass;
    
    //Input or initialize values Here
    cout<<"Enter the mass of an object in kg"<<endl;
    cin>>mass;
    weight=mass*9.8;//Calculates weight
    
    //Process/Calculations Here
    if(weight<10){
        cout<<"The object is too light"<<endl;
    }
    else if(weight>1000){
        cout<<"The object is too heavy"<<endl;
    }
    
    //Exit
    return 0;
}

