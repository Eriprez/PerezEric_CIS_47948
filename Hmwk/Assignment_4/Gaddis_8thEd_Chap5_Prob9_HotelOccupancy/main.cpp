/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Hotel Occupancy
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
    int floors;//Total number of floors
    int rooms;//Total number of rooms per floor
    int closed;//Number of rooms occupied per floor
    float rate;//Occupancy rate of the hotel
    int count=0;//Total number of rooms in the hotel
    int count2=0;//Total number of occupied rooms in the hotel
    int open;//Total number of open rooms in the hotel
    //Input or initialize values Here
    cout<<"How many floors does the hotel have?"<<endl;
    cin>>floors;
    
    //Process/Calculations Here
    for(int i=0;i<floors;i++){
        cout<<"How many rooms are on floor "<<i+1<<"?"<<endl;
        cin>>rooms;
        count+=rooms;
        cout<<"How many rooms are occupied on floor "<<i+1<<"?"<<endl;
        cin>>closed;
        count2+=closed;
    }
    open=(count-count2);
    cout<<"There are a total of "<<count<<" rooms in the hotel"<<endl;
    cout<<"Of which "<<count2<<" rooms are occupied and "<<open<<" rooms are unoccupied"<<endl;
    rate=count2/count;
    cout<<"The rate of occupancy is "<<rate*100<<"%"<<endl;
    
    //Exit
    return 0;
}

