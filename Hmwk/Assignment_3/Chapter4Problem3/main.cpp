//Gaddis Chapter 4 
//problem 3 Magic Dates
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


using namespace std;
int main(int argc, char** argv) {
    int month,day,year;
    cout<<"Enter the numeric value of a month"<<endl;
    cin>>month;
    cout<<"Enter the day"<<endl;
    cin>>day;
    cout<<"Enter the last two digits of the year"<<endl;
    cin>>year;
    if(day*month==year){
        cout<<"This date is magic!"<<endl;
        
    }
    else 
        cout<<"This date is not magic"<<endl;
    return 0;
}

