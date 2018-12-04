/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: op
 *
 * Created on December 3, 2018, 9:11 PM
 */

#include <cstdlib>

using namespace std;
int *doSomething(int*x,int*y);
int main(int argc, char** argv) {
    int z=0;
    int x=5;
    int y=7;
    z=doSomething(x,y);
    return 0;
}
int *doSomething(int*x,int*y){
    int* temp=x;
    x=y*10;
    y=temp*10;
    return *x+*y;
}
