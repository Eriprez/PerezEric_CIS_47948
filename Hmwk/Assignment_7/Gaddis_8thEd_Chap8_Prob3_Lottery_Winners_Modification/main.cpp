/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Lottery Winners
 */
#include <iostream>
#include <cstdlib>

using namespace std;
void binarySearch(int array[],int,int value);
int main(int argc, char** argv) {
    int size=10;
    int winner=0;
    int lucky[size]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    cout<<"Enter this week's winning 5 digit number:"<<endl;
    cin>>winner;
    binarySearch(lucky, size, winner);

    return 0;
}
void binarySearch(int array[],int size,int value){
    int first=0;
    int last=size-1;
    int middle=0;
    int position=-1;
    int count=0;
    bool found=false;
    while(!found&&first<=last){
        middle=(first+last)/2;
        if(array[middle]==value){
            found=true;
            position=middle;
        }
        else if(array[middle]>value){
            last=middle-1;
        }
        else
            first=middle+1;
        count++;
    }
    if(found){
        cout<<"Congratulations you won this weeks lottery!"<<endl;
    }
    else
        cout<<"Sorry,you did not win this weeks lottery."<<endl;
        
}
