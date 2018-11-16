#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    double cups,cupb,cupf;
    cups=1.5;
    cupb=1;
    cupf=2.75;
    int amount;
    double perCookieS=cups/48;
    double perCookieB=cupb/48;
    double perCookieF=cupf/48;
    
    cout<<"Enter the amount of cookies you want to bake"<<endl;
    cin>>amount;
    cout<<"You will need "<<perCookieS*amount<<" cups of sugar,"<<perCookieB*amount<<" cups of butter and "<<perCookieF*amount<<" cups of flour."<<endl;
    return 0;
}

