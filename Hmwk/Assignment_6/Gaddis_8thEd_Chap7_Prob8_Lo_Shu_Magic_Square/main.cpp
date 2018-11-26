/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Lo Shu Magic Square
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>

using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void loshusq( int a[3][3],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare/initialize all Variables Here
    int rows=3;
    int cols=3;
    int a[3][3]={{4,9,2},
                {3,5,7},
                {8,1,6}};
    loshusq(a,rows);
    return 0;
}
void loshusq(int a[3][3],int rows){
    int values[8]={0};
    int count=0;
    for(int i=0;i<rows;i++){
        values[0]=values[0]+a[0][i];
        values[1]=values[1]+a[1][i];
        values[2]=values[2]+a[2][i];
        values[3]=values[3]+a[i][0];
        values[4]=values[4]+a[i][1];
        values[5]=values[5]+a[i][2];
    }
    values[6]=a[2][0]+a[1][1]+a[0][2];
    values[7]=a[0][0]+a[1][1]+a[2][2];
    for(int i=0;i<8;i++){
        if(values[0]==values[i]){
            count+=1;
        }
        
    }
    if(count==8){
    cout<<"The 2D array is a Lu Shu Magic Square"<<endl;
    }
    else
    cout<<"The 2D array is not a Lu Shu Magic Square"<<endl;

        
}
