/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Search Benchmark
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void linearSearch(int array[],int,int);
void binarySearch(int array[],int,int);
int main(int argc, char** argv) {
    int size=20;
    int value=30;
    int array1[]={1,3,6,8,9,13,13,17,18,20,21,22,30,40,44,53,55,60,66,72};
    int array2[]={1,3,6,8,9,13,13,17,18,20,21,22,30,40,44,53,55,60,66,72};
    linearSearch(array1,size,value);
    binarySearch(array2,size,value);
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
    cout<<"The total number of comparisons for the linear search was "<<index<<endl;
    
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
    cout<<"The total number of comparisons for the binary search was "<<count<<endl;
}
