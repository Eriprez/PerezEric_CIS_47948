/* 
 * File:   main.cpp
 * Author: Eric Perez
 * Created on November 8,2018
 * Purpose:  Black Jack
 */

//System Libraries
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
    srand(static_cast<unsigned int> (time(0))); //seeding the rand to use the computer's date/time as a variable

    
   
    ifstream nameFile;
    ifstream inFile;
    ofstream outputFile;
    string deck; //Card deck of 52
    string dealer; //The cards the dealer has
    string player; //The cards the player has.Changes with the hand in play.
    string table; //Used to store cards when splitting
    string hand;
    //Used to check for similar cards
    string check1;
    string check2;  
    string card; //Card value 
    string suit; //Card suit
    char answer;
    int total1; //Dealer's total card values
    int total2; //Player's total card values
    int plays; //Total plays. When a player "busts" it is considered a play.
    int num1;
    int num2;
    int num3;
    int count;
    int j = 2;
    int k = 0;
    int split; //Counts the number of splits. Only 3 are allowed in Black Jack.
    int turn; //Counts the number of turns per hand.
    float bet;
    bool dealout; //Used to end the game
    bool draw; //Used to draw only 2 cards the first turn or 1 more card on a split
    bool bust; //Does not mean the standard black jack term of bust.It means that the players went over 21,double downed, or stayed.
    //Checks if there was a split.
    bool split1;
    bool split2;
    bool split3;
    bool condition;
   
    //Game logic
    cout << setprecision(2) << fixed;
    do {

        outputFile.open("total.txt");
        nameFile.open("deck.txt"); 
        hand = "*****************\n*Player's Hand 1*\n*****************"; //Shows which Hand is in play.
        total1 = 0; //Dealer's total card values
        total2 = 0; //Player's total card values
        answer;
        plays = 0; //Total plays. When a player "busts" it is considered a play.
        num1 = 0;
        num2 = 0;
        num3 = 0;
        count = 0;
        j = 2;
        k = 0;
        turn = 0; //Counts the number of turns per hand.
        bet = 0;
        dealout = true;
        draw = true; //Used to draw only 2 cards the first turn or 1 more card on a split
        bust = false; //Does not mean the standard black jack term of bust.It means that the players went over 21,double downed, or stayed.
        //Checks if there was a split.
        split1 = false;
        split2 = false;
        split3 = false;
        split = 0; //Counts the number of splits. Only 3 are allowed in Black Jack.
        condition = true;


        if (nameFile) {
            while (nameFile >> deck) {

            }
            nameFile.close();
        } else {
            cout << "Error cannot open file.\n";
        }
        cout << "Enter a bet value from 1-10000" << endl;
        cin>>bet;
        //Checks to see if bet is within the range [1,10000]
        while (bet < 1 || bet > 10000) {
            cout << "Error:Enter a value from 1-10000" << endl;
            cin>>bet;
        }
        cout << "***************\n*Dealer's Hand*\n***************" << endl;

        //Draws the dealers 2 cards
        for (int i = 0; i < 2; i++) {
            num1 = rand() % deck.length();
            if (num1 % 2 != 0) {
                num1 = num1 - 1;
            }
            card = deck.substr(num1, 1);
            suit = deck.substr(num1 + 1, 1);
            deck.erase(num1, 2);
            
            if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
                total1 = total1 + 10;
            } else if (!card.compare("A")&&((total1 + 11) <= 21)) {
                total1 = total1 + 11;
            } else if (!card.compare("A")&&((total1 + 11) > 21)) {
                total1 = total1 + 1;
            } else {
                total1 = total1 + stoi(card);
            }

            dealer = dealer + card + suit;
        }
        cout << setw(7) << "** " << (card + suit) << endl;

        //Players Hand
        while (!bust) {
            condition = true;
            turn = turn + 1;
            //Draws 2 cards on players first turn or 1 more cards on a split
            if (draw) {
                if (split1 || split2 || split3) {
                    j = 1;
                }
                for (int i = 0; i < j; i++) {
                    num1 = rand() % deck.length();
                    if (num1 % 2 != 0) {
                        num1 = num1 - 1;
                    }
                    card = deck.substr(num1, 1);
                    suit = deck.substr(num1 + 1, 1);
                    deck.erase(num1, 2);
                    
                    player = player + (card + suit);
                }

                //Used to format the cards with a space in between.
                cout << hand << endl;
                cout << setw(7);
                for (int i = 0; i < (player.length()) / 2; i++) {
                    cout << player.substr(num2, 2) << " ";
                    num2 = num2 + 2;
                }
                cout << endl;
                cout << "Bet:$" << bet << endl;
                draw = false;
            }
            //Converts the card "value" into an integer
            if (turn == 1) {
                num2 = 0;
                for (int i = 0; i < player.length() / 2; i++) {
                    card = player.substr(num2, 1);
                    if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
                        total2 = total2 + 10;
                    } else if (!card.compare("A")&&((total2 + 11) <= 21)) {
                        total2 = total2 + 11;
                    } else if (!card.compare("A")&&((total2 + 11) > 21)) {
                        total2 = total2 + 1;
                    } else {
                        total2 = total2 + stoi(card);
                    }
                    num2 = num2 + 2;
                }

            }
            //Check if there are cards of the same value in a hand.
            num2 = 0;
            for (int i = 0; i < (player.length()) / 2; i++) {
                num3 = 0;
                count = 0;
                check1 = player.substr(num2, 1);
                for (int j = 0; j < (player.length()) / 2; j++) {
                    check2 = player.substr(num3, 1);
                    if (!check1.compare(check2)) {
                        count = count + 1;
                        if (count > 1 && split < 3 && condition) {
                            cout << "Would you like to split?(y/n)" << endl;
                            cin>>answer;
                            if (answer == 'y') {
                                split = split + 1;
                                table = player.substr(num3, 2);
                                card = player.substr(num3, 1);
                                player.erase(num3, 2);
                                if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
                                    total2 = total2 - 10;
                                } else if (!card.compare("A")&&((total2 + 11) <= 21)) {
                                    total2 = total2 - 11;
                                } else if (!card.compare("A")&&((total2 + 11) > 21)) {
                                    total2 = total2 - 1;
                                } else {
                                    total2 = total2 - stoi(card);
                                }

                                cout << hand << endl;
                                cout << setw(10) << player << endl;
                                if (split == 1) {
                                    split1 = true;
                                } else if (split == 2) {
                                    split2 = true;
                                } else if (split == 3) {
                                    split3 = true;
                                }
                                condition = false;

                            } else {
                                condition = false;
                            }
                        }
                    }
                    num3 = num3 + 2;
                }
                num2 = num2 + 2;
            }
            if (total2 < 21) {
                cout << "Would you like to hit(h),stay(s),or double down(d)" << endl;
                cin>>answer;
                switch (answer) {
                    case 'h':
                        num1 = rand() % deck.length();
                        if (num1 % 2 != 0) {
                            num1 = num1 - 1;
                        }
                        card = deck.substr(num1, 1);
                        suit = deck.substr(num1 + 1, 1);
                        deck.erase(num1, 2);
                        if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
                            total2 = total2 + 10;
                        } else if (!card.compare("A")&&((total2 + 11) <= 21)) {
                            total2 = total2 + 11;
                        } else if (!card.compare("A")&&((total2 + 11) > 21)) {
                            total2 = total2 + 1;
                        } else {
                            total2 = total2 + stoi(card);
                        }
                        player = player + (card + suit);
                        num2 = 0;
                        cout << hand << endl;
                        cout << setw(7);
                        for (int i = 0; i < (player.length()) / 2; i++) {
                            cout << player.substr(num2, 2) << " ";
                            num2 = num2 + 2;
                        }
                        cout << endl;
                        cout << "Bet:$" << bet << endl;
                        break;
                    case 'd':
                        k = 0;
                        if (turn == 1) {
                            bet = bet * 2;
                            if (player.length() > 2) {
                                k = 1;
                            } else {
                                k = 2;
                            }
                            for (int i = 0; i < k; i++) {
                                num1 = rand() % deck.length();
                                if (num1 % 2 != 0) {
                                    num1 = num1 - 1;
                                }
                                card = deck.substr(num1, 1);
                                suit = deck.substr(num1 + 1, 1);
                                deck.erase(num1, 2);
                                if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
                                    total2 = total2 + 10;
                                } else if (!card.compare("A")&&((total2 + 11) <= 21)) {
                                    total2 = total2 + 11;
                                } else if (!card.compare("A")&&((total2 + 11) > 21)) {
                                    total2 = total2 + 1;
                                } else {
                                    total2 = total2 + stoi(card);
                                }
                                player = player + (card + suit);
                                num2 = 0;
                                cout << hand << endl;
                                cout << setw(7);
                                for (int i = 0; i < (player.length()) / 2; i++) {
                                    cout << player.substr(num2, 2) << " ";
                                    num2 = num2 + 2;
                                }
                                cout << endl;
                                cout << "Bet:$" << bet << endl;
                            } 
                            bust = true;
                        } else {
                            cout << "you can only double down on your first turn";
                        }
                        break;
                    case 's':
                        num2 = 0;
                        cout << hand << endl;
                        cout << setw(7);
                        for (int i = 0; i < (player.length()) / 2; i++) {
                            cout << player.substr(num2, 2) << " ";
                            num2 = num2 + 2;
                        }
                        cout << endl;
                        cout << "Bet:$" << bet << endl;
                        bust = true;
                        break;
                    default:
                        bust = true;
                        break;

                }
            } else {
                bust = true;
            }
            if (bust) {
                plays = plays + 1;
                outputFile << total2 << endl;
                if (split1 && plays == 1) {
                    total2 = 0;
                    turn = 0;
                    bust = false;
                    player = table.substr(0, 2);
                    table.erase(0, 2);
                    draw = true;
                    hand = "*****************\n*Player's Hand 2*\n*****************";
                } else if (split2 && plays == 2) {
                    total2 = 0;
                    turn = 0;
                    bust = false;
                    player = table.substr(0, 2);
                    table.erase(0, 2);
                    draw = true;
                    hand = "*****************\n*Player's Hand 3*\n*****************";
                } else if (split3 && plays == 3) {
                    total2 = 0;
                    turn = 0;
                    bust = false;
                    player = table.substr(0, 2);
                    table.erase(0, 2);
                    draw = true;
                    hand = "*****************\n*Player's Hand 4*\n*****************";
                }
            }
        }

        total2 = 0;
        outputFile.close();
        inFile.open("total.txt");
        cout << "***************\n*Dealer's Hand*\n***************" << endl;
        num2 = 0;
        cout << setw(7);
        for (int i = 0; i < (dealer.length()) / 2; i++) {
            cout << dealer.substr(num2, 2) << " ";
            num2 = num2 + 2;
        }
        cout << endl;
        if (inFile) {
            for (int i = 0; i < plays; i++) {
                inFile>>total2;
                if (total1 > total2 || total2 > 21) {
                    cout << "Player's Hand " << i + 1 << " lost:-$" << bet << endl;
                } else if (total1 < total2 && total2 <= 21) {
                    cout << "Player's Hand " << i + 1 << " won:$" << bet + bet * 1.5 << endl;
                } else {
                    cout << "Player's Hand " << i + 1 << " neither won or lost" << endl;
                }
            }
        } else {
            cout << "Error cannot open file.\n";
        }
        cout << "Would you like to play again?(y,n)";
        cin>>answer;
        if (answer == 'y') {
            dealout = false;
        } else if (answer == 'n') {
            dealout = true;
        } else {
            dealout = true;
        }
        nameFile.close();
        inFile.close();
    } while (dealout != true); //End of Program


    return 0;
}