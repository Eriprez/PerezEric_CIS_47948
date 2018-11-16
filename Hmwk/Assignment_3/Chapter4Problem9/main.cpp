//Gaddis Chapter 4 Problem 9
//Change for a dollar game
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int quarters,nickels,dimes,pennies;
    cout<<"Enter the amount of quarters"<<endl;
    cin>>quarters;
    cout<<"Enter the amount of dimes"<<endl;
    cin>>dimes;
    cout<<"Enter the amount of nickels"<<endl;
    cin>>nickels;
    cout<<"Enter the amount of pennies"<<endl;
    cin>>pennies;
    double amount=quarters*(.25)+dimes*(.10)+nickels*(.05)+pennies*(.01);
    if(amount==1.0){
        cout<<"Congratulations! You won the change for a dollar game.";
    }
    else if(amount<1.0){
        cout<<"The amount you entered is less than a dollar.";
    }      
    else if(amount>1.0){
        cout<<"The amount you entered is more than a dollar.";
    } 
    return 0;
}

