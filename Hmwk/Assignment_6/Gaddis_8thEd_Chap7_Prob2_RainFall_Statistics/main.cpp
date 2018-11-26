/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: RainFall Statistics
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    double months[12]={0};
    int total=0;
    float largest;
    float smallest;
    for(int i=0;i<12;i++){
        cout<<"Enter the amount of rainfall for month "<<i+1<<endl;
        cin>>months[i];
        while(months[i]<0){
            cout<<"Error:Cannot enter a negative number.\n";
            cin>>months[i];
        }
        if(i==0){
            largest=months[i];
            smallest=months[i];
        }
        if(months[i]>largest){
            largest=months[i];
        }
        else if(months[i]<smallest){
            smallest=months[i];
        }
        total+=months[i];
    }
    cout<<"The largest amount of rain fall in a month is "<<largest<<endl;;
    cout<<"The smallest amount of rain fall in a month is "<<smallest<<endl;
    cout<<"The total amount of rain fall in the year is "<<total<<endl;
    cout<<"The average amount of rain fall in the year "<<total/12<<endl;
    return 0;
}

