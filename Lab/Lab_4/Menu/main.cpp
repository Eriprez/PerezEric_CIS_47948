/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 4th, 2018, 10:25 AM
 * Purpose:  Menu Template
 */
/*Perez,Eric
 Gaddis 8th edition
 */

//System Libraries Here

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;
//Program Execution Begins Here
int main(int argc, char** argv) {
    int num,num1,num2;
    int month,day,year;
    double rect1,rect2;
    double width1,width2,length1,length2;
    double weight,height,bmi,mass;
    double amount;
    int quarters,nickels,dimes,pennies;
    string red="red";
    string blue="blue";
    string yellow="yellow";
    string primarycolor1;
    string primarycolor2;
    char choice;//Option 0 to 9 input as a character not a numeric value
    
    //Input or initialize values Here
    cout<<"This program illustrates a Menu"<<endl;
    cout<<"Choose the problem you wish to solve"<<endl;
    cout<<"0 -> Gaddis_8thEd_Chap4_Prob1_JustATest"<<endl;
    cout<<"1 -> Gaddis_8thEd_Chap4_Prob2_JustATest"<<endl;
    cout<<"2 -> Gaddis_8thEd_Chap4_Prob3_JustATest"<<endl;
    cout<<"3 -> Gaddis_8thEd_Chap4_Prob4_JustATest"<<endl;
    cout<<"4 -> Gaddis_8thEd_Chap4_Prob5_JustATest"<<endl;
    cout<<"5 -> Gaddis_8thEd_Chap4_Prob6_JustATest"<<endl;
    cout<<"6 -> Gaddis_8thEd_Chap4_Prob7_JustATest"<<endl;
    cout<<"7 -> Gaddis_8thEd_Chap4_Prob8_JustATest"<<endl;
    cout<<"8 -> Gaddis_8thEd_Chap4_Prob9_JustATest"<<endl;
    cout<<"9 -> Gaddis_8thEd_Chap4_Prob10_JustATest"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    switch(choice){
        //
        case '0':
            cout<<"Enter two numbers"<<endl;
            cin>>num1;
            cin>>num2;
            if(num1>num2){
                cout<<"The first number you entered is larger than the second"<<endl;
            }
            else if(num2>num1)
                cout<<"The second number you entered is larger than the first"<<endl;
            else
                cout<<"Neither number is larger";
            break;
        //   
        case '1':
            cout<<"Enter a number from 1 to 10"<<endl;
            cin>>num;
            if(num<1||num>10){
                cout<<"Enter a number in the range from 1 to 10";
            }
            else{
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
               
                }}   
            break;
        //
        case '2':
            cout<<"Enter the numeric value of a month"<<endl;
            cin>>month;
            cout<<"Enter the day"<<endl;
            cin>>day;
            cout<<"Enter the last two digits of the year"<<endl;
            cin>>year;
            if(day*month==year){
                cout<<"This date is magic!"<<endl;
            }
            else 
            cout<<"This date is not magic"<<endl;
            break;
        //
        case '3':
            cout<<"Enter the width of rectangle 1"<<endl;
            cin>>width1;
            cout<<"Enter the length of rectangle 1"<<endl;
            cin>>length1;
            cout<<"Enter the width of rectangle 2"<<endl;
            cin>>width2;
            cout<<"Enter the length rectangle 2"<<endl;
            cin>>length2;
            rect1=width1*length1;
            rect2=width2*length2;
            if(rect1>rect2){
                cout<<"Rectangle 1 is greater than rectangle 2"<<endl;
            }
            else if(rect2>rect1){
                cout<<"Rectangle 2 is greater than Rectangle 1"<<endl;
            }
            else if(rect2==rect1){
                cout<<"Both the rectangles are the same area"<<endl;
            }
            break;
        //
        case '4':
            cout<<"Please enter your weight in pounds"<<endl;
            cin>>weight;
            cout<<"Please enter your height in inches"<<endl;
            cin>>height;
            bmi=weight*703/(pow(height,2));
            cout<<fixed<<setprecision(2)<<endl;
            if(bmi<18.5){
                cout<<"Your bmi is "<<bmi<<" You are under weight."<<endl;
            }
            else if(bmi>25){
                cout<<"Your bmi is "<<bmi<<" You are over weight."<<endl;
            }
            else if(bmi>=18.5&&bmi<=25){
                cout<<"Your bmi is "<<bmi<<" You are at optimal weight."<<endl;
            }
            break;
        //
        case '5':
            weight=0;
            mass=0;
            cout<<"Enter the mass of an object in kg"<<endl;
            cin>>mass;
            weight=mass*9.8;
            if(weight<10){
                cout<<"The object is too light"<<endl;
            }
            else if(weight>1000){
                cout<<"The object is too heavy"<<endl;
            }
            break;
        //
        case '6':
            double seconds;
            cout<<"Enter a number of seconds."<<endl;
            cin>>seconds;
            if(seconds>=60){
                cout<<seconds/60<<" minute(s)";
            }
            else if(seconds>=3600){
                cout<<seconds/3600<<" hour(s)";
            }
            else if(seconds>=86400){
                cout<<seconds/86400<<" day(s)";
            }
            break;
        //
        case '7':

            cout<<"Enter a primary color"<<endl;
            cin>>primarycolor1;
            cout<<"Enter a different primary color"<<endl;
            cin>>primarycolor2;
            if(primarycolor1==red){
                if(primarycolor2==blue){
                    cout<<"purple";
                }
                else if(primarycolor2==yellow){
                    cout<<"orange";
                }
                else if(primarycolor2==red){
                    cout<<"red";
                }
            }
            else if(primarycolor1==blue){
                if(primarycolor2==blue){
                    cout<<"blue";
                }
                else if(primarycolor2==yellow){
                    cout<<"green";
                }
                else if(primarycolor2==red){
                    cout<<"purple";
                }
            }
            else if(primarycolor1==yellow){
                if(primarycolor2==blue){
                    cout<<"green";
                }
                else if(primarycolor2==yellow){
                    cout<<"yellow";
                }
                else if(primarycolor2==red){
                    cout<<"orange";
                }
            }
            else
                cout<<"Error: please enter \'red\',\'blue\',or \'yellow\'";
                break;
        //
        case '8':
            cout<<"Enter the amount of quarters"<<endl;
            cin>>quarters;
            cout<<"Enter the amount of dimes"<<endl;
            cin>>dimes;
            cout<<"Enter the amount of nickels"<<endl;
            cin>>nickels;
            cout<<"Enter the amount of pennies"<<endl;
            cin>>pennies;
            amount=quarters*(.25)+dimes*(.10)+nickels*(.05)+pennies*(.01);
            if(amount==1.0){
                cout<<"Congratulations! You won the change for a dollar game.";
            }
            else if(amount<1.0){
                cout<<"The amount you entered is less than a dollar.";
            }      
            else if(amount>1.0){
                cout<<"The amount you entered is more than a dollar.";
            } 
            break;
        //
        case '9':
            int month,year;
            cout<<"Enter a month (1-12)"<<endl;
            cin>>month;
            cout<<"Enter a year"<<endl;
            cin>>year;
            switch(month){
                case(1):
                    cout<<"31 days";
                    break;
                case(2):
                    if(year%4==0&&year%100!=0){
                        cout<<"29 days";
                    }
                    else if(year%4==0&&year%100==0&&year%400){
                        cout<<"29 days";
                    }
                    else 
                        cout<<"28 days";
                    break;
                case(3):
                    cout<<"31 days";
                    break;
                case(4):
                    cout<<"30 days";
                    break;
                case(5):
                    cout<<"31 days";
                    break;
                case(6):
                    cout<<"30 days";
                    break;
                case(7):
                    cout<<"31 days";
                    break;
                case(8):
                    cout<<"31 days";
                    break;
                case(9):
                    cout<<"30 days";
                    break;
                case(10):
                    cout<<"31 days";
                    break;
                case(11):
                    cout<<"30 days";
                    break;
                case(12):
                    cout<<"31 days";
                    break; 
            }
            break;
        default:
            cout<<"Having trouble following instructions?"<<endl;
    }
    
    //Exit Stage Right
    return 0;
    }

