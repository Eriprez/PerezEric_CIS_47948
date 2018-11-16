#include <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    double excise=.39;
    double sales=.08;
    double fee=.10;
    double federal=.184;
    double cost;
    double govProfit;
    double gasProfit=.065;
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Enter the amount you paid per gallon of gas"<<endl;
    cin>>cost;
    double totaltax=excise+fee+federal+(cost*.08);
    cout<<"The total tax you paid per gallon of gas in the state of California is: $"<<totaltax<<endl;
    cout<<"The total dollar amount gas companies make per gallon of gas is: $"<<cost*.065<<endl;
    govProfit=totaltax/cost;
    cout<<"The government makes "<<(govProfit-gasProfit)*100<<" precent more profit than gas companies";
    
    return 0;
}


