/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 9th,2018,9:22am
 * Purpose: Movie Profit
 */
//System Libraries Here
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
struct MovieData {
    string Title;
    string Director;
    int Year;
    int Time;

};
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void displayMovie(MovieData *);
//Program Execution Begins Here
int main(int argc, char** argv) {
    MovieData movie1;
    MovieData movie2;
    movie1 = {"Blade Runner 2049", "Denis Villeneuve", 2017, 166};
    movie2 = {"Metropolis", "Fritz Lang", 1927, 153};
    displayMovie(&movie1);
    displayMovie(&movie2);
    return 0;
}
void displayMovie(MovieData *p) {
    cout << "Title: " << p->Title << endl;
    cout << "Director: " << p->Director << endl;
    cout << "Year: " << p->Year << endl;
    cout << "Time " << p->Time << " Min" << endl;
    cout<<endl;
};

