/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Larger Than n
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void largerN(int [],int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare/initialize all Variables Here
    int size=5;
    int array[size]={3,4,5,15,21};
    int n;
    
    //Process/Calculations Here
    cout<<"Enter a number n"<<endl;
    cin>>n;
    largerN(array,size,n);
    return 0;
}
void largerN(int array[],int size,int n){
    for(int i=0;i<size;i++){
        if(array[i]>n){
            cout<<"The number "<<array[i]<<" is larger than n"<<endl;
        }
    }
}
