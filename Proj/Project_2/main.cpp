
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;
//Function Prototypes
void filDeck(string [], int);
void shuffle(string [], int, int);
void draw(string [], string &, int &, int);
int addVal(string);
void prntH(string);
bool play(string [],string &,string &,int &,int &,float & );
void chkSplit(string &,string&,string,bool [],int &,int &);
void calcVal(vector<int>,int);
int main(int argc, char** argv) {
    

    string table;
    //Headers
    string header1;
    string header2;
    string header3;
    string header4;
    string header5;
    ///////
    int n2Shufl;
    const int NUMCRDS = 52;
    string deck[NUMCRDS];
    string dealer;
    string player;
    int index = 0;
    char answer;
    int value1=0; //Dealer's total card values
    int value2=0; //Player's total card values
    int plays=0; //Total plays. When a player "busts" it is considered a play.
    vector<int>values;

    int count = 0;
    int j = 2;
    int k = 0;
    int totSplit=0; //Counts the number of splits. Only 3 are allowed in Black Jack.
    int turn=0; //Counts the number of turns per hand.
    float bet;
    bool dealout; //Used to end the game
    //Used to draw only 2 cards the first turn or 1 more card on a split
    bool bust=false; //Does not mean the standard black jack term of bust.It means that the players went over 21,double downed, or stayed.
    //Checks if there was a split.
    bool split[3]={false};
    srand(static_cast<unsigned int> (time(0)));
    cout << setprecision(2) << fixed;
    do {
        header1 = "***************\n*Dealer's Hand*\n***************";
        header2 = "*****************\n*Player's Hand *\n*****************";
        header3 = "******************\n*Player's Split 1*\n******************";
        header4 = "******************\n*Player's Split 2 *\n******************";
        header5 = "******************\n*Player's Split 3 *\n******************";

        n2Shufl = 7; //How many times to Shuffle the Deck
        deck[NUMCRDS]; //52 Cards represented as a string Face|Suit

        //Initial Variables
        filDeck(deck, NUMCRDS);
        //Shuffle Deck
        shuffle(deck, NUMCRDS, n2Shufl);

        cout << "Enter a bet value from 1-10000" << endl;
        cin>>bet;
        //Checks to see if bet is within the range [1,10000]
        while (bet < 1 || bet > 10000) {
            cout << "Error:Enter a value from 1-10000" << endl;
            cin>>bet;
        }
        ////////////////////////
        cout << header1 << endl;
        //Draw the dealers first 2 cards.
        draw(deck, dealer, count, 2);
        //Print out the dealers cards.
        cout << setw(7) << "** " << dealer.substr(0, 2) << endl;
        value1 = addVal(dealer);
        values.push_back(value1);
        /////////////////////////
        while (!bust) {
            if (turn == 0) {
                if(split[0]){
                    j=1;
                }
                draw(deck, player, count, j);
                value2 = addVal(player);
                cout<<header2<<endl;
                prntH(player);
                
            }
            chkSplit(table,player,header2,split,totSplit,value2);
            bust = play(deck, player, header2, count, value2, bet);
            turn++;
            if (bust) {
                values.push_back(value2);
                plays = plays + 1;
                if (split[0] && plays == 1) {
                    value2 = 0;
                    turn = 0;
                    bust = false;
                    player = table.substr(0, 2);
                    table.erase(0, 2);
                    header2=header3;
                } else if (split[1] && plays == 2) {
                    value2 = 0;
                    turn = 0;
                    bust = false;
                    player = table.substr(0, 2);
                    table.erase(0, 2);
                    header2=header4;
                } else if (split[2] && plays == 3) {
                    value2 = 0;
                    turn = 0;
                    bust = false;
                    player = table.substr(0, 2);
                    table.erase(0, 2);
                    header2=header5;
                }
            }

        }
        cout<<header1<<endl;
        prntH(dealer);
        calcVal(values,bet);
        //////////////////////////
        cout << "Would you like to play again?(y,n)";
        cin>>answer;
        if (answer == 'y') {
            dealout = false;
        } else if (answer == 'n') {
            dealout = true;
        } else {
            dealout = true;
        }


    } while (dealout != true);
    return 0;
}

void filDeck(string c[], int n) {
    //Spades, Hearts, Clubs, Diamonds
    char suit[] = {'S', 'H', 'C', 'D'};
    char face[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
    for (int i = 0; i < n; i++) {
        c[i] = face[i % 13];
        c[i] += suit[i / 13];
    }
}

void shuffle(string c[], int nCrd, int nShuf) {
    for (int shuf = 1; shuf <= nShuf; shuf++) {
        for (int card = 0; card < nCrd; card++) {
            int indx = rand() % nCrd;
            string temp = c[card];
            c[card] = c[indx];
            c[indx] = temp;
        }
    }
}

void draw(string c[], string &hand, int &count, int n) {
    for (int i = 0; i < n; i++) {
        hand += c[count];
        count++;
    }
}

void prntH(string hand) {
    int num2 = 0;
    cout << setw(7);
    for (int i = 0; i < (hand.length()) / 2; i++) {
        cout << hand.substr(num2, 2) << " ";
        num2 = num2 + 2;
    }
    cout << endl;
}
int addVal(string hand) {
    int value=0;
    int num = 0;
    string card;
    for (int i = 0; i < hand.length() / 2; i++) {
        card = hand.substr(num, 1);
        if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
            value = value + 10;
        } else if (!card.compare("A")&&((value + 11) <= 21)) {
            value = value + 11;
        } else if (!card.compare("A")&&((value + 11) > 21)) {
            value = value + 1;
        } else {
            value = value + stoi(card);
        }
        num = num + 2;
    }
    return value;
}

bool play(string c[], string &hand, string &header,int &count, int &value,float &bet) {
    char answer;
    bool x=false;
    int k=0;
    if (value < 21) {
        cout << "Would you like to hit(h),stay(s),or double down(d)" << endl;
        cin>>answer;
        switch (answer) {
            case 'h':
                cout<<header<<endl;
                draw(c, hand,count,1);
                value=addVal(hand);
                prntH(hand);
                cout << "Bet:$" << bet << endl;
                x=false;
                break;
            case 'd':
                if (count == 4) {
                    bet = bet * 2;
                    if (hand.length() > 2) {
                        k = 1;
                    } else {
                        k = 2;
                    }
                    draw(c,hand,count,k);
                    addVal(hand);
                    cout<<header<<endl;
                    prntH(hand);
                    cout << "Bet:$" << bet << endl;
                    x=true;
                } else {
                    cout << "you can only double down on your first turn";
                    x=false;
                }
                break;
            case 's':
                cout<<header<<endl;
                prntH(hand);
                x=true;
                break;
            default:
                x=true;
                break;

        }return x;
    } else {
        return true;
    }
}
void chkSplit(string &table,string &hand,string header,bool split[],int &totSplit,int &value){
    int num2 = 0;
    int num3;
    int count;
    string check1;
    string check2;
    bool condition=true;
    char answer;
    string card;
            for (int i = 0; i < (hand.length()) / 2; i++) {
                num3 = 0;
                count = 0;
                check1 = hand.substr(num2, 1);
                for (int j = 0; j < (hand.length()) / 2; j++) {
                    check2 = hand.substr(num3, 1);
                    if (!check1.compare(check2)) {
                        count = count + 1;
                        if (count > 1 && totSplit < 3 && condition) {
                            cout << "Would you like to split?(y/n)" << endl;
                            cin>>answer;
                            if (answer == 'y') {
                                totSplit++;
                                table = hand.substr(num3, 2);
                                card = hand.substr(num3, 1);
                                hand.erase(num3, 2);
                                if (!card.compare("T") || !card.compare("J") || !card.compare("Q") || !card.compare("K")) {
                                    value = value - 10;
                                } else if (!card.compare("A")&&((value + 11) <= 21)) {
                                    value = value - 11;
                                } else if (!card.compare("A")&&((value + 11) > 21)) {
                                    value = value - 1;
                                } else {
                                    value = value - stoi(card);
                                }

                                cout << header << endl;
                                prntH(hand);
                                if (totSplit == 1) {
                                    split[0] = true;
                                } else if (totSplit == 2) {
                                    split[1] = true;
                                } else if (totSplit == 3) {
                                    split[2] = true;
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
}

void calcVal(vector<int> vect,int bet) {
    for (int i = 1; i < vect.size(); i++) {
        if (vect[0] > vect[i] || vect[i] > 21) {
            cout << "Player's Hand " << i << " lost:-$" << bet << endl;
        } else if (vect[0] < vect[i] && vect[i] <= 21) {
            cout << "Player's Hand " << i << " won:$" << bet + bet * 1.5 << endl;
        } else {
            cout << "Player's Hand " << i << " neither won or lost" << endl;
        }
    }
}