/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Charge Account Validation
 */
#include <iostream>
#include <cstdlib>

using namespace std;
void selectSort(int array[],int);
void binarySearch(int array[],int,int value);
int main(int argc, char** argv) {
    int size=18;
    int account=0;
    int list[size]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,7881200,4581002};
    cout<<"Enter a 7 digit account number to see if it is a valid number:"<<endl;
    cin>>account;
    selectSort(list,size);
    binarySearch(list, size, account);

    return 0;
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
        cout<<"The account number entered is valid"<<endl;
    }
    else
        cout<<"The account numbered entered is not valid"<<endl;   
}