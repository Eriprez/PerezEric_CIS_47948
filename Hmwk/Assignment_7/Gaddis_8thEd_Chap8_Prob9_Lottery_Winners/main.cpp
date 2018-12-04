/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Lottery Winners
 */
#include <iostream>
#include <cstdlib>

using namespace std;
void linearSearch(int array[],int,int value);
int main(int argc, char** argv) {
    int size=10;
    int winner=0;
    int lucky[size]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    
    cout<<"Enter this week's winning 5 digit number:"<<endl;
    cin>>winner;
    linearSearch(lucky, size, winner);

    
       
    return 0;
}
void linearSearch(int array[],int size,int value){
    int index=0;
    int position=-1;
    bool found=false;
    while(index<size&&!found){
        if(array[index]==value){
            found=true;
            position=index;
        }
        index++;
    }
    if(found){
        cout<<"Congratulations you won this weeks lottery!"<<endl;
    }
    else
        cout<<"Sorry,you did not win this weeks lottery."<<endl;
        
}
