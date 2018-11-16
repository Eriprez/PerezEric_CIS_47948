/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Change for a Dollar Game
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
    int quarter,nickel,dime,penny;
    float amount;
    
    //Input or initialize values Here
    cout<<"Enter the amount of quarters"<<endl;
    cin>>quarter;
    cout<<"Enter the amount of dimes"<<endl;
    cin>>dime;
    cout<<"Enter the amount of nickels"<<endl;
    cin>>nickel;
    cout<<"Enter the amount of pennies"<<endl;
    cin>>penny;
    
    //Process/Calculations Here
    amount=quarter*(.25)+dime*(.10)+nickel*(.05)+penny*(.01);
    if(amount==1.0){
        cout<<"Congratulations! You won the change for a dollar game.";
    }
    else if(amount<1.0){
        cout<<"The amount you entered is less than a dollar.";
    }      
    else if(amount>1.0){
        cout<<"The amount you entered is more than a dollar.";
    } 
    
    //Exit
    return 0;
}

