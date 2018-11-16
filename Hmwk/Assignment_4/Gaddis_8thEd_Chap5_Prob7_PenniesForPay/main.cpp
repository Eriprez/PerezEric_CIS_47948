/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Pennies for Pay
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cmath>//Math functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float pennies;
    float salary;
    float total=0;
    int days;
    
    //Input or initialize values Here
    cout<<"Enter the number of day you will work"<<endl;
    cin>>days;
    if(days<1){
        cout<<"Error:Enter a number greater than or equal to 1"<<end;
        return 0;
    }
    
    //Process/Calculations Here
    for(int i=0;i<days;i++){
        if(i==0){
        pennies=1;
        }
        else{
            pennies=2*pennies;
        }
     
        salary=pennies/100;
        total=total+salary;
        cout<<"Pay for day "<<i+1<<": "<<salary<<endl;     
    }
    cout<<"Total pay: "<<total<<endl;
    return 0;
}

