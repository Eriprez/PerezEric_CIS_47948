/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Largest/Smallest Array Values
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
    //Declare/initialize all Variables Here
    int size=10;
    float arr1[size];
    float largest;
    float smallest;
    
    //Process/Calculations Here
    for(int i=0;i<size;i++){
        cout<<"Enter a number into the array"<<endl;
        cin>>arr1[i];
        if(i==0){
            smallest=arr1[i];
            largest=arr1[i];
        }
        if(arr1[i]>largest){
            largest=arr1[i];
        }
        else if(arr1[i]<smallest){
            smallest=arr1[i];
        }
    }
    cout<<"The largest value in the array is "<<largest<<endl;
    cout<<"The smallest value in the array is "<<smallest<<endl;
    return 0;
}

