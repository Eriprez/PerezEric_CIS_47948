//Gaddis Chapter 4 Problem 2
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;




int main(int argc, char** argv) {
    int num;
    cout<<"Enter a number from 1 to 10"<<endl;
    cin>>num;
    if(num<1||num>10){
        cout<<"Enter a number in the range from 1 to 10";
    }
    else
        switch(num){
            case 1:
                cout<<"The roman numeral of 1 is I";
                break;
            case 2:
                cout<<"The roman numeral of 2 is II";
                break;
            case 3:
                cout<<"The roman numeral of 3 is III";
            break;
            case 4:
                cout<<"The roman numeral of 4 is IV";
                break;
            case 5:
                cout<<"The roman numeral of 5 is V";
                break;
            case 6:
                cout<<"The roman numeral of 6 is VI";
                break;
            case 7:
                cout<<"The roman numeral of 7 is VII";
                break;
            case 8:
                cout<<"The roman numeral of 8 is VIII";
                break;
            case 9:
                cout<<"The roman numeral of 9 is IX";
                break;
            case 10:
                cout<<"The roman numeral of 10 is X";
                break;
               
                
          
            
        }
    return 0;
}

