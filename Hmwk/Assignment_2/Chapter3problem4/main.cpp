#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    double rainfall1,rainfall2,rainfall3;
    string month1,month2,month3;
    double average;
     cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Enter a month"<<endl;
    cin>>month1;
    cout<<"Enter the rainfall in inches for the month of "<<month1<<endl;
    cin>>rainfall1;
     cout<<"Enter a month"<<endl;
    cin>>month2;
    cout<<"Enter the rainfall in inches for the month of "<<month2<<endl;
    cin>>rainfall2;
     cout<<"Enter a month"<<endl;
    cin>>month3;
    cout<<"Enter the rainfall in inches for the month of "<<month3<<endl;
    cin>>rainfall3;
    average=(rainfall1+rainfall2+rainfall3)/3;
    cout<<"The average rain fall of "<<month1<<","<<month2<<" and "<<month3<<" is "<<average<<" inches"<<endl;
    return 0;
}

