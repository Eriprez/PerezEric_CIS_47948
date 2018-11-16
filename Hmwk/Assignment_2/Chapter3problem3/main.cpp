
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    double score1,score2,score3,score4,score5;
    double average;
     cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Enter five test scores hit enter after each score"<<endl;
    cin>>score1;
    cin>>score2;
    cin>>score3;
    cin>>score4;
    cin>>score5;
    average=(score1+score2+score3+score4+score5)/5;
    cout<<"The average of the five test scores is "<<average<<endl;

    return 0;
}

