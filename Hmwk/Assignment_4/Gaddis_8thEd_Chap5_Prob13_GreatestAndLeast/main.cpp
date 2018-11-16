/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: The Greatest and Least of These
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cmath>//Math functions
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int num;
    int largest=num;
    int smallest=1;
    //Input or initialize values Here
    cout<<"Enter a series of integers"<<endl;
    cout<<"When you are done entering the integers enter -99"<<endl;
    
    //Process/Calculations Here
    while(num!=-99){
        cout<<"Enter a number:";
        cin>>num;
        if(num != -99){
            if (num > smallest){
                    largest = num;
            }
            else{
                smallest =num;					
            }		
        }
    }
    cout<<"The largest number is :"<<largest<<endl;
    cout<<"The smallest number is :"<<smallest<<endl;
    
    //Exit
    return 0;
}

