/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Color Mixer
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
    string red="red";
    string blue="blue";
    string yellow="yellow";
    string color1;//First Primary Color 
    string color2;//Second Primary COlor
    
    //Input or initialize values Here
    cout<<"Enter a primary color"<<endl;
    cin>>color1;
    cout<<"Enter a second primary color"<<endl;
    cin>>color2;
    
    //Process/Calculations Here
    if(color1==red){
        if(color2==blue){
            cout<<"purple";
        }
        else if(color2==yellow){
            cout<<"orange";
        }
        else if(color2==red){
            cout<<"red";
        }
    }
    else if(color1==blue){
        if(color2==blue){
            cout<<"blue";
        }
        else if(color2==yellow){
            cout<<"green";
        }
        else if(color2==red){
            cout<<"purple";
        }
    }
    else if(color1==yellow){
        if(color2==blue){
            cout<<"green";
        }
        else if(color2==yellow){
            cout<<"yellow";
        }
        else if(color2==red){
            cout<<"orange";
        }
    }
    else
        cout<<"Error: please enter \'red\',\'blue\',or \'yellow\'";
    
    //Exit
    return 0;
}

