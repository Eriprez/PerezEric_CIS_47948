/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Pay Roll
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    int empId[7]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[7]={0};
    float payrate[7]={0};
    float wages[7]={0};
    cout<<setprecision(2)<<fixed;
    for(int i=0;i<7;i++){
        cout<<"Employee id:"<<empId[i]<<endl;
        cout << "Enter the hours worked for this employee.\n";
        cin >> hours[i];
        while (hours[i] < 0) {
            cout << "Error:Enter a number of hours that is not negative.\n";
            cin >> hours[i];
        }
        cout << "Enter the pay rate for this employee.\n";
        cin >> payrate[i];
        while (payrate[i] < 15) {
            cout << "Error:Enter a pay rate greater than $15.00.\n" ;
            cin >> payrate[i];
        }
        wages[i]=hours[i]*payrate[i];
    }
    for(int i=0;i<7;i++){
        cout<<"Employee id:"<<empId[i]<<endl;
        cout<<"Wages:$"<<wages[i]<<endl;
    }
    return 0;
}

