//Chapter 4 problem 5
//Body Mass Index
#include <iostream>
//Gaddis Chapter 4 Problem 5
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;


using namespace std;


int main(int argc, char** argv) {
    double bmi;
    double weight,height;
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>weight;
    cout<<"Please enter your height in inches"<<endl;
    cin>>height;
    bmi=weight*703/(pow(height,2));
    cout<<fixed<<setprecision(2)<<endl;
    if(bmi<18.5){
        cout<<"Your bmi is "<<bmi<<" You are under weight."<<endl;
    }
    else if(bmi>25){
        cout<<"Your bmi is "<<bmi<<" You are over weight."<<endl;
    }
    else if(bmi>=18.5&&bmi<=25){
        cout<<"Your bmi is "<<bmi<<" You are at optimal weight."<<endl;
    }
    return 0;
}

