/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Driver License Exam
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    char exam[20]={'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
    char answer[20]={'A'};
    char incorrect[20];
    int count=0;
    
    for(int i=0;i<20;i++){
         cout<<"Enter your answer for "<<i+1<<endl;
         cin>>answer[i];
         while(answer[i]!='A'&&answer[i]!='B'&&answer[i]!='C'&&answer[i]!='D'){
             cout<<"Error:Enter a valid answer A,B,C,or D.\n";
             cin>>answer[i];
         }
         if(exam[i]!=answer[i]){
             count+=1;
             incorrect[i]=i;
         }
            
    }
    if(count<=5){
        cout<<"Congratulations you passed"<<endl;
        cout<<"you missed "<<count<<" questions"<<endl;
        if(count!=0){
            cout<<"Here are the questions you missed.\n";
            for (int i = 0; i < count; i++) {
                cout << "Question " << incorrect[i] << endl;
            }
        }
    } else {
        cout << "You failed";
        cout << "you missed " << count << " questions" << endl;
        cout << "Here are the questions you missed.\n";
        for (int i = 0; i < count; i++) {
            cout << "Question " << incorrect[i] << endl;
        }
    }
    return 0;
}

