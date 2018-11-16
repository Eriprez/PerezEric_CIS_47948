/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Sales Bar Chart
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
    float store[5];//Array that stores the sales of 5 stores
    int count;//Number of * 
    
    //Process/Calculations Here
    for(int i=0;i<5;i++){
        cout<<"Enter today's sales for store "<<i+1<<":"<<endl;
        cin>>store[i];
    }
    cout<<"Sales Bar Chart"<<endl;
    cout<<"(Each * =$100)"<<endl;
    for(int i=0;i<5;i++){
        count=store[i]/100;
        cout<<"Store "<<i+1<<":";
        for(int j=0;j<count;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    //Exit
    return 0;
}

