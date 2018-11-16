/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Sum of Numbers
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
    int n;//Number
    int sum=0;//Sum of numbers
    
    //Input or initialize values Here
    cout<<"Enter a positive integer value"<<endl;
    cin>>n;
    
    //Process/Calculations Here
    if(n<0){
        cout<<"Error:Enter a positive number"<<endl;
        return 0;
    }
    for(int i=1;i<n+1;i++){
       sum=sum+i; 
       cout<<sum<<endl;
    }
    cout<<"Total sum "<<sum;   
    
    //Exit
    return 0;
}

