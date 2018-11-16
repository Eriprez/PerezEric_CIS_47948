/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on October 17th,2018,8:40pm
 * Purpose: Area of Rectangles
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
    float rect1;
    float rect2;
    float width1,width2,length1,length2;
    
    //Input or initialize values Here
    cout<<"Enter the width of rectangle 1"<<endl;
    cin>>width1;
    cout<<"Enter the length of rectangle 1"<<endl;
    cin>>length1;
    cout<<"Enter the width of rectangle 2"<<endl;
    cin>>width2;
    cout<<"Enter the length rectangle 2"<<endl;
    cin>>length2;
    rect1=width1*length1;//Area of Rectangle 1
    rect2=width2*length2;//Area of Rectangle 2
    
    //Process/Calculations Here
    if(rect1>rect2){
        cout<<"Rectangle 1 is greater than rectangle 2"<<endl;
    }
    else if(rect2>rect1){
        cout<<"Rectangle 2 is greater than Rectangle 1"<<endl;
    }
    else if(rect2==rect1){
        cout<<"Both the rectangles are the same area"<<endl;
    }
    
    //Exit
    return 0;
}

