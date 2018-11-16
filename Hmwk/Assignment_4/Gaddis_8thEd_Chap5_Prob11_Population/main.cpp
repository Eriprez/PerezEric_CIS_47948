/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Population Growth
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
    float initial;//Starting number of organisms
    float increase;//Daily population increase as a percentage
    int days;//Number of days organisms will populate
    
    //Input or initialize values Here
    cout<<"Enter the initial number of organisms greater than or equal to 2"<<endl;
    cin>>initial;
    if(initial<2){
        cout<<"Error:You entered a number less than 2"<<endl;
        return 0;
    }
    cout<<"Enter the average population increase as a percentage of the organism"<<endl;
    cin>>increase;
    if(increase<0){
        cout<<"Error:You entered a negative number"<<endl;
        return 0;
    }
    cout<<"Enter the number of days greater than or equal to 1 the organism will populate for"<<endl;
    cin>>days;
    if(days<1){
        cout<<"Error:You entered a number less than 1"<<endl;
        return 0;
    }
    
    //Process/Calculations Here
    for(int i=0;i<days;i++){
        initial=initial+initial*increase/100;
        cout<<"Population for day "<<i+1<<": "<<initial<<endl;
    }
    
    //Exit
    return 0;
}

