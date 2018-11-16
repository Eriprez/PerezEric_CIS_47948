//Gaddis Chapter 4 Problem 8
//Color Mixer
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string red="red";
    string blue="blue";
    string yellow="yellow";
    string primarycolor1;
    string primarycolor2;
    cout<<"Enter a primary color"<<endl;
    cin>>primarycolor1;
    cout<<"Enter a different primary color"<<endl;
    cin>>primarycolor2;
    if(primarycolor1==red){
        if(primarycolor2==blue){
            cout<<"purple";
        }
        else if(primarycolor2==yellow){
            cout<<"orange";
        }
        else if(primarycolor2==red){
            cout<<"red";
        }
    
    }
    else if(primarycolor1==blue){
        if(primarycolor2==blue){
            cout<<"blue";
        }
        else if(primarycolor2==yellow){
            cout<<"green";
        }
        else if(primarycolor2==red){
            cout<<"purple";
        }
    }
    else if(primarycolor1==yellow){
        if(primarycolor2==blue){
            cout<<"green";
        }
        else if(primarycolor2==yellow){
            cout<<"yellow";
        }
        else if(primarycolor2==red){
            cout<<"orange";
        }
    }
    else
        cout<<"Error: please enter \'red\',\'blue\',or \'yellow\'";
    return 0;
}

