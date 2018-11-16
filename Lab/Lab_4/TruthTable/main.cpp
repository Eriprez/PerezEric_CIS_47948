/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 4th, 2018, 10:25 AM
 * Purpose:  Truth Table
 */
/*Perez,Eric*/
//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Output Table Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X !(X&&Y) "<<
            "!X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Output the first row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"   "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y?'T':'F')<<"      "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"        ";
       
    cout<<endl;
    
    //Output the second row
    x=true;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"   "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y?'T':'F')<<"      "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"        ";
    cout<<endl;
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"   "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y?'T':'F')<<"      "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"        ";
    cout<<endl;
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" "
        <<(y?'T':'F')<<"  "
        <<(!x?'T':'F')<<"  "
        <<(!y?'T':'F')<<"   "
        <<(x&&y?'T':'F')<<"    "
        <<(x||y?'T':'F')<<"   "
        <<(x^y?'T':'F')<<"    "
        <<(x^y^y?'T':'F')<<"     "
        <<(x^y^x?'T':'F')<<"      "
        <<(!(x&&y)?'T':'F')<<"       "
        <<(!x||!y?'T':'F')<<"      "
        <<(!(x||y)?'T':'F')<<"      "
        <<(!x&&!y?'T':'F')<<"        ";
    cout<<endl;
    
    
    //Exit
    return 0;
}

