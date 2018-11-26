/*
 * File: main.cpp
 * Author: Eric Perez
 * Created on November 24th,2018,12:35am
 * Purpose: Tic-Tac-Toe
 */

//System Libraries Here
#include <iostream> //I/O Library
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    char board[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    bool winner=false;
    bool tie=false;
    int turn=1;
    int row=0;
    int col = 0;
    int count[8];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
    while (winner == false && tie == false) {
        
        if (turn == 9) {
            tie = true;
        }
        if (turn % 2 == 0) {//Even
            cout << "Player two's turn: Enter a row then column\n";
            cin>>row;
            cin>>col;
            while (board[row][col] == 'X' || board[row][col] == 'O') {
                if (board[row][col] == 'X') {
                    cout << "This location is already in use by Player One.\n";
                    cin>>row;
                    cin>>col;
                } else if (board[row][col] == 'O') {
                    cout << "This location has already been selected.\n";
                    cin>>row;
                    cin>>col;
                }
            }
            board[row][col]='O';
        } else {//odd
            cout << "Player one's turn: Enter a row then column.\n";
            cin>>row;
            cin>>col;
            while (board[row][col] == 'X' || board[row][col] == 'O') {
                if (board[row][col] == 'O') {
                    cout << "This location is already in use by Player two.\n";
                    cin>>row;
                    cin>>col;
                } else if (board[row][col] == 'X') {
                    cout << "This location has already been selected.\n";
                    cin>>row;
                    cin>>col;
                }
            }
            board[row][col] = 'X';
        }
        turn++;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j];
            }
            cout << endl;
        }
        for (int i = 0; i < 3; i++) {
            int count[8]={0};
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == 'X') {
                    count[0] += 1;
                    if (count[0] == 3) {
                        winner = true;
                    }
                }
                if (board[j][i] == 'X') {
                    count[1] += 1;
                    if (count[1] == 3) {
                        winner = true;
                    }
                }
                if (board[j][j] == 'X') {
                    count[2] += 1;
                    if (count[2] == 3) {
                        winner = true;
                    }
                }
                if (board[j][2-j] == 'X') {
                    count[3] += 1;
                    if (count[3] == 3) {
                        winner = true;
                    }
                }
                if (board[j][i] == 'O') {
                    count[4] += 1;
                    if (count[4] == 3) {
                        winner = true;
                    }
                }
                if (board[j][i] == 'O') {
                    count[5] += 1;
                    if (count[5] == 3) {
                        winner = true;
                    }
                }

                if (board[j][j] == 'O') {
                    count[6] += 1;
                    if (count[6] == 3) {
                        winner = true;
                    }
                }
                if (board[j][2-j] == 'O') {
                    count[7] += 1;
                    if (count[7] == 3) {
                        winner = true;
                    }
                }
            }
        }

       
    }

    return 0;
}

