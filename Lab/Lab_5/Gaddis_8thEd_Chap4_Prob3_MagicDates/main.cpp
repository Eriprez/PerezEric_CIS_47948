/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Magic Dates
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
    int month,day,year;
    
    //Input or initialize values Here
    cout<<"Enter the numeric value of a month"<<endl;
    cin>>month;
    cout<<"Enter the day"<<endl;
    cin>>day;
    cout<<"Enter the last two digits of the year"<<endl;
    cin>>year;
    
    //Process/Calculations Here
    if(day*month==year){
        cout<<"This date is magic!"<<endl;
        
    }
    else 
        cout<<"This date is not magic"<<endl;
    
    //Exit
    return 0;
}

