
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    double classA,classB,classC;
    double classA_sold,classB_sold,classC_sold;
    classA=15;
    classB=12;
    classC=9;
    double total;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"How many tickets did you sell for class A"<<endl;
    cin>>classA_sold;
    cout<<"How many tickets did you sell for class B"<<endl;
    cin>>classB_sold;
    cout<<"How many tickets did you sell for class C"<<endl;
    cin>>classC_sold;
    total=classA*classA_sold+classB*classB_sold+classC*classC_sold;
    cout<<"Total revenue from ticket sales $"<<total;
    return 0;
}

