#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    int females,males,total;
    cout<<"Enter the number of females in the class"<<endl;
    cin>>females;
    cout<<"Enter the number of males in the class"<<endl;
    cin>>males;
    total=females+males;
    cout<<"The percentage of females in the class is %"<<(females*100)/total;
    cout<<"The percentage of males in the class is %"<<(males*100)/total;      
    return 0;
}

