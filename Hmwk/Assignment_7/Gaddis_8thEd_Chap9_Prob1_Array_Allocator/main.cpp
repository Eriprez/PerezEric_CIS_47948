/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on December 3,2018 at 6:07pm
 * Purpose: Array Allocator
 */
#include <cstdlib>
#include <iostream>
using namespace std;
int num(int number);
int* allocate(int num);

int main() {
    int number = 0;
    int *array;
    cout << "Enter the number of elements in the array to allocate.\n";
    cin>>number;
    array = allocate(number);
    for (int i = 0; i < number; i++) {
        cout << array[i] << endl;
    }

}

int* allocate(int num) {
    int *array = new int(num);

    for (int i = 0; i < num; i++) {
        cout << "enter number " << i + 1 << endl;
        cin >> array[i];
    }

    return array;

}