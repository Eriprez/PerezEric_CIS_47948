/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Number Analysis Program
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
#include <fstream>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    int num[10]={0};
    ifstream inputFile;
    int count=0;
    int smallest;
    int largest;
    int total=0;
    inputFile.open("numbers.txt");
    while(count<10&&inputFile>>num[count]){
        count++;
    }
    inputFile.close();
    for(int i=0;i<10;i++){
        if(i==0){
            smallest=num[i];
            largest=num[i];
        }
        if(num[i]>largest){
            largest=num[i];
            
        }
        else if(num[i]<smallest){
            smallest=num[i];
        }
        total+=num[i];
    }
    cout<<"The largest number in the array is "<<largest<<endl;
    cout<<"The smallest number in the array is "<<smallest<<endl;
    cout<<"The total sum of the array is "<<total<<endl;
    cout<<"The average of the array is "<<total/10<<endl;
    return 0;
}

