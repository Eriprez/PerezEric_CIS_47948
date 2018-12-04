/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Test Scores
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int num(int number);
int* allocate(int num);
void selectSort(int*array,int num);
void calcAverage(int*array,int num);
int main() {
    int num = 0;
    int *array;
    cout << "Enter the number of test scores to allocate.\n";
    cin>>num;
    array = allocate(num);
    selectSort(array, num);
    cout<<"The test scores in ascending order are as follows: "<<endl;
    for(int i=0;i<num;i++){
        cout<<array[i]<<endl;
    }
    calcAverage(array, num);


}

int* allocate(int num) {
    int *array = new int(num);

    for (int i = 0; i < num; i++) {
        cout << "Enter test score " << i + 1 << endl;
        cin >> array[i];
        while (array[i] < 0) {
            cout << "Enter a valid test score that is greater than equal to 0" <<endl;
            cout << "Enter test score " << i + 1 << endl;
            cin >> array[i];
        }
        
    }

    return array;

}
void selectSort(int* array,int num){
    int startScan,minIndex,minValue;
    int numSwaps=0;
    for(startScan=0;startScan<(num-1);startScan++){
        minIndex=startScan;
        minValue=array[startScan];
        for(int index=startScan+1;index<num;index++){
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
void calcAverage(int*array,int num){
    int total=0;
    for(int i=0;i<num;i++){
        total+=array[i];
    }
    cout<<"The test average is "<<endl;
    cout<<total/num;
}