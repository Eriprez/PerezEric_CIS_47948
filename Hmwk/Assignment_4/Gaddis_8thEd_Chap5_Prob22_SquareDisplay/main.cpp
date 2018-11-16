/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Square Display
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
    int num;//Number less than or equal to 15
    
    //Input or initialize values Here
    cout<<"Enter a integer less than or equal to 15"<<endl;
    cin>>num;
    if(num>15){
        cout<<"Error:Enter a integer less than or equal to 15"<<endl;
        return 0;
    }
    
    //Process/Calculations Here
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cout<<"X";
        }
        cout<<endl;
    }
    
    //Exit
    return 0;
}

