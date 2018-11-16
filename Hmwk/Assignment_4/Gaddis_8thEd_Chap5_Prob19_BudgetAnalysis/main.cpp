/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 18th,2018,8:07pm
 * Purpose: Budget Analysis
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
    float budget;//Monthly budget
    float expenses=1;//Monthly expenses
    int count=1;//Expense counter
    //Input or initialize values Here
    cout<<"Enter your monthly budget"<<endl;
    cin>>budget;
    
    //Process/Calculations Here
    cout<<"Enter all your expenses for the month"<<endl;
    cout<<"When you are done entering your expenses enter 0"<<endl;
    while(expenses!=0){
        cout<<"Expense "<<count<<":";
        cin>>expenses;
        budget=budget-expenses;
        cout<<"Budget:"<<budget<<endl;
        count++;        
    }
    if(budget<0){
        cout<<"You are over budget by $"<<abs(budget)<<endl;
    }
    else if(budget>0){
        cout<<"You are under budget by $"<<budget<<endl;
    }
    
    //Exit
    return 0;
}

