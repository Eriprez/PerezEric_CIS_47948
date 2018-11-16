/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Days in a Month
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
    int month,year;
    
    //Input or initialize values Here
    cout<<"Enter a month (1-12)"<<endl;
    cin>>month;
    cout<<"Enter a year"<<endl;
    cin>>year;
    
    //Process/Calculations Here
    switch(month){
        case(1):
            cout<<"31 days";
            break;
        case(2):
            if(year%4==0&&year%100!=0){
            cout<<"29 days";
            }
            else if(year%4==0&&year%100==0&&year%400){
                cout<<"29 days";
            }
            else 
                cout<<"28 days";
            break;
        case(3):
            cout<<"31 days";
            break;
        case(4):
            cout<<"30 days";
            break;
        case(5):
            cout<<"31 days";
            break;
        case(6):
            cout<<"30 days";
            break;
        case(7):
            cout<<"31 days";
            break;
        case(8):
            cout<<"31 days";
            break;
        case(9):
            cout<<"30 days";
            break;
        case(10):
            cout<<"31 days";
            break;
        case(11):
            cout<<"30 days";
            break;
        case(12):
            cout<<"31 days";
            break; 
    }
    
    //Exit
    return 0;
}

