//Gaddis Chapter 4 Problem 4
//Area of Rectangles
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

using namespace std;


int main(int argc, char** argv) {
    double rect1;
    double rect2;
    double width1,width2,length1,length2;
    cout<<"Enter the width of rectangle 1"<<endl;
    cin>>width1;
    cout<<"Enter the length of rectangle 1"<<endl;
    cin>>length1;
    cout<<"Enter the width of rectangle 2"<<endl;
    cin>>width2;
    cout<<"Enter the length rectangle 2"<<endl;
    cin>>length2;
    rect1=width1*length1;
    rect2=width2*length2;
    if(rect1>rect2){
        cout<<"Rectangle 1 is greater than rectangle 2"<<endl;
    }
    else if(rect2>rect1){
        cout<<"Rectangle 2 is greater than Rectangle 1"<<endl;
    }
    else if(rect2==rect1){
        cout<<"Both the rectangles are the same area"<<endl;
    }
    return 0;
}

