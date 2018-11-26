/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Vector Modification
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
#include <vector>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool testPIN(vector<int>&vect1,vector<int>&vect2,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    const int NUM_DIGITS=7;
    vector<int> pin1{2,4,1,8,7,9,0};
    vector<int> pin2{2,4,6,8,7,9,0};
    vector<int> pin3{1, 2, 3, 4, 5, 6, 7};
    if (testPIN(pin1, pin2, NUM_DIGITS)) {
        cout << "Error:pin1 and pin2 report to be the same.\n";
    } else {
        cout << "Success:pin1 and pin2 are different.\n";
    }
    if (testPIN(pin1, pin3, NUM_DIGITS)) {
        cout << "Error:pin1 and pin3 report to be the same.\n";
    } else {
        cout << "Success:pin1 and pin3 are different.\n";
    }
    if (testPIN(pin1, pin1, NUM_DIGITS)) {
        cout << "Error:pin1 and pin1 report to be the same.\n";
    } else {
        cout << "Success:pin1 and pin1 are different.\n";
    }
    return 0;
}
bool testPIN(vector<int>&vect1,vector<int>&vect2,int size){
    for(int index=0;index<size;index++){
        if(vect1[index]!=vect2[index])
            return false;
    }
    return true;
}
