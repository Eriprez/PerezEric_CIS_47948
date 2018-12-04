/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Sorting Benchmarks
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void bubbleSort(int array[],int);
void selectSort(int array[],int);
int main(int argc, char** argv) {
    int size=20;
    int array1[size]={1,20,8,6,9,13,22,30,21,40,44,3,18,13,17,55,53,60,66,72};
    int array2[size]={1,20,8,6,9,13,22,30,21,40,44,3,18,13,17,55,53,60,66,72};
    bubbleSort(array1,size);
    selectSort(array2,size);
    return 0;
}
void bubbleSort(int array[],int size){
    bool swap;
    int temp=0;
    int numSwaps=0;
    do{
        swap=false;
        for(int i=0;i<size-1;i++){
            if(array[i]>array[i+1]){
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
                swap=true;
                numSwaps++;
            }
        }
    
    }while(swap);
   
    cout<<"The total number of exchanges for the bubble sort is "<<numSwaps<<endl;
    
}
void selectSort(int array[],int size){
    int startScan,minIndex,minValue;
    int numSwaps=0;
    for(startScan=0;startScan<(size-1);startScan++){
        minIndex=startScan;
        minValue=array[startScan];
        for(int index=startScan+1;index<size;index++){
            if(array[index]<minValue){
                minValue=array[index];
                minIndex=index;
                numSwaps++;
            }
        }
        array[minIndex]=array[startScan];
        array[startScan]=minValue;
    }
     cout<<"The total number of exchanges for the Selection sort is "<<numSwaps<<endl;
}