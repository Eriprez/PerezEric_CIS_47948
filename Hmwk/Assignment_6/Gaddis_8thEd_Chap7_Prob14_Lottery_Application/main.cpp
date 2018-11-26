/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Lottery Application
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(time(NULL));
    //Declare/initialize all Variables Here
    int lottery[5] = {0};
    int user[5] = {0};
    int count = 0;
    
    //Process/Calculations Here
    for (int i = 0; i < 5; i++) {
        lottery[i] = rand() % 9;
        cout << "Enter an integer from 0-9:" << endl;
        cin >> user[i];
    }
    cout << "Lottery ticket:" << endl;
    for (int i = 0; i < 5; i++) {
        if (lottery[i] == user[i]) {
            count++;
        }
        cout << lottery[i] << " ";
    }
    cout<<endl;
    if(count==5){
        cout<<"Congratulations! you are the grand prize winner"<<endl;
    }
    else{
        cout<<"There are "<<count<<" matching number(s) with the lottery"<<endl;
    }
    return 0;
}

