/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Body Mass Index
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <iomanip> //IO Manipulators
#include <cmath> //Math Functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float bmi;
    float weight,height;
    
    //Input or initialize values Here
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;//Initializes variable weight to user input.
    cout<<"Please enter your height in inches"<<endl;
    cin>>height;//Initializes variable height to user input.
    
    //Process/Calculations Here
    bmi=weight*703/(pow(height,2)); //Calculates Body Mass Index
    cout<<fixed<<setprecision(2)<<endl; //Sets precision to two decimal points
    if(bmi<18.5){
        cout<<"Your bmi is "<<bmi<<" You are under weight."<<endl;
    }
    else if(bmi>25){
        cout<<"Your bmi is "<<bmi<<" You are over weight."<<endl;
    }
    else if(bmi>=18.5&&bmi<=25){
        cout<<"Your bmi is "<<bmi<<" You are at optimal weight."<<endl;
    }
    //Exit
    return 0;
}

