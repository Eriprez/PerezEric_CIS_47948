#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    string movieName;
    int adultTickets,childTickets;
    double grossProfit,netProfit,paitDist;
     cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Enter the name of the movie."<<endl;
    cin>>movieName;
    cout<<"Enter the amount of adult tickets sold."<<endl;
    cin>>adultTickets;
    cout<<"Enter the amount of child tickets sold."<<endl;
    cin>>childTickets;
    grossProfit=adultTickets*10+childTickets*6;
    netProfit=grossProfit*.2;
    cout<<"Movie Name:"<<setw(10)<<movieName<<endl;
    cout<<"Adult Tickets Sold:"<<setw(10)<<adultTickets<<endl;
    cout<<"Child Tickets Sold:"<<setw(10)<<childTickets<<endl;
    cout<<"Gross Box Office Profit:"<<setw(10)<<"$"<<grossProfit<<endl;
    cout<<"Net Box Office Profit:"<<setw(10)<<"$"<<netProfit<<endl;
    
    
    return 0;
}

