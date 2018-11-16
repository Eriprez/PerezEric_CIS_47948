#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <ctime>


using namespace std;


int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));//seeding the rand to use the computers time as a variable
    
    //Declare variables
    float bet1=0;
    float bet2=0;
    float bet3=0;
    float bet4=0;
    
    int blackjack=0;
    
    bool bust1=false;
    bool bust2=false;
    bool bust3=false;
    bool bust4=false;
    
    bool dealout=true;
    char answer; 
    int num1=0;
    int num4;
    //string deck="2H2D2C2S3H3D3C3S4H4D4C4S5H5D5C5S6H6D6C6S7H7D7C7S8H8D8C8S9H9D9C9S1H1D1C1SJHJDJCJSQHQDQCQSKHKDKCKSAHADACAS";
    
    int player=0;
    int total2=0;
    int total3=0;
    int total4=0;
    int total5=0;
    bool hit=true;
    bool draw=true;
    string hand2;//holds values+suits
    
    string hand3;
    
    string hand4;
    
    string hand5;

    
    string check1;
    string check2;   
    string card;
    string suit;
    int num2=0;
    int num3=0;
    
    int count=0;
    
    string hand1;
    int dealer=0;    

    bool split1=false;
    bool split2=false;
    bool split3=false;
    
    int split;
    int turn=0;
    char answer2;
    int value1=0;
    int length1;
    //Game logic
    cout<<setprecision(2)<<fixed<<endl;
    do{
        string deck;
        fstream nameFile;
        nameFile.open("deck.txt",ios::in);
        if(nameFile){
            while(nameFile>>deck){
                
            }
            nameFile.close();
        }
        else{
            cout<<"Error cannot open file.\n";
        }
        cout<<"How much would you like to bet?"<<endl;
        cin>>bet1;
        //while(blackjack!=21||player>dealer){
        //Dealers hand
        cout<<"***************"<<endl;
        cout<<"*Dealer's Hand*"<<endl;
        cout<<"***************"<<endl;

        for(int i=0;i<2;i++){
            length1=deck.length();
            num1=rand()%length1;
            if(num1%2!=0){
                num1=num1-1;
                card=deck.substr(num1,1);
                suit=deck.substr(num1+1,1);
                deck.erase(num1,2);
            }
            else{
                card=deck.substr(num1,1);
                suit=deck.substr(num1+1,1);
                deck.erase(num1,2);
            }
            if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                value1=value1+10;
            }
            else if(!card.compare("A")&&((value1+11)<=21)){
                value1=value1+11;
            }
            else if(!card.compare("A")&&((value1+11)>21)){
                value1=value1+1;
            }
            else{
                value1=value1+stoi(card);
            }
            
            hand1=card+suit+" "+hand1;
        }
        cout<<setw(7)<<"** "<<(card+suit)<<endl;
        
       //Players Hand
        while(bust1!=true){//Total possible number of hands due to splitting
            turn=turn+1;
            if(draw){
                for(int i=0;i<2;i++){//Will only execute twice for the first 2 cards
                    length1=deck.length();
                    num1=rand()%length1;
                    if(num1%2!=0){
                        num1=num1-1;
                        card=deck.substr(num1,1);
                        suit=deck.substr(num1+1,1);
                        deck.erase(num1,2);
                    }
                    else{
                        card=deck.substr(num1,1);
                        suit=deck.substr(num1+1,1);
                        deck.erase(num1,2);
                    }
                    if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                        total2=total2+10;
                    }   
                    else if(!card.compare("A")&&((total2+11)<=21)){
                        total2=total2+11;
                    }
                    else if(!card.compare("A")&&((total2+11)>21)){
                        total2=total2+1;
                    }
                    else{
                        total2=total2+stoi(card);
                    }
                    hand2=hand2+(card+suit);
                    
                }
                cout<<"***************"<<endl;
                cout<<"*Player's Hand*"<<endl;
                cout<<"***************"<<endl;
                cout<<setw(6)<<hand2.substr(0,2)<<" "<<hand2.substr(2,4)<<endl;
                draw=false;
            }
            
            //Find a way to check if they can split Error!
            num2=0;
            count=0;
            for(int i=0;i<(hand2.length())/2;i++){
                num3=0;
                check1=hand2.substr(num2,1);
                for(int j=0;j<(hand2.length())/2;j++){
                    check2=hand2.substr(num3,1);
                    if(!check1.compare(check2)){
                        count=count+1;
                        num4=num3;
                    }
                    num3=num3+2;
                    
                }

                num2=num2+2;
            }
            if(count>2&&split<=3){
                cout<<"Would you like to split?(y/n)";
                cin>>answer2;
                if(answer2=='y'){
                    
                    hand3=hand2.substr(num4,2);
                    total2=total2-stoi(hand2.substr(num4,1));
                    hand2.erase(num4,2);
                    cout<<endl;
                    cout<<"***************"<<endl;
                    cout<<"*Player's Hand*"<<endl;
                    cout<<"***************"<<endl;
                    cout<<setw(5)<<hand2<<" ";
                    split1=true;
                    turn=turn+1;
                    split=split+1;
                } 
            }
            
            cout<<"Would you like to hit(h),stay(s),or double down(d)"<<endl;
            cin>>answer;
            switch(answer){
                case 'h':
                    if(total2<21){
                        length1=deck.length();
                        num1=rand()%length1;
                        if(num1%2!=0){
                            num1=num1-1;
                            card=deck.substr(num1,1);
                            suit=deck.substr(num1+1,1);
                            deck.erase(num1,2);
                        }
                        else{
                            card=deck.substr(num1,1);
                            suit=deck.substr(num1+1,1);
                            deck.erase(num1,2);
                        }
                        if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                            total2=total2+10;
                        }   
                        else if(!card.compare("A")&&((total2+11)<=21)){
                            total2=total2+11;
                        }
                        else if(!card.compare("A")&&((total2+11)>21)){
                            total2=total2+1;
                        }
                        else{
                            total2=total2+stoi(card);
                        }
                        hand2=hand2+(card+suit);
                        cout<<setw(7)<<card+suit<<endl;;
                    }
                    else{
                        bust1=true;
                    }
                    break;
                case 'd':
                    if(turn==1){
                        bet1=bet1*2;
                        length1=deck.length();
                        num1=rand()%length1;
                        if(num1%2!=0){
                            num1=num1-1;
                            card=deck.substr(num1,1);
                            suit=deck.substr(num1+1,1);
                            deck.erase(num1,2);
                        }
                        else{
                            card=deck.substr(num1,1);
                            suit=deck.substr(num1+1,1);
                            deck.erase(num1,2);
                        }
                        if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                            total2=total2+10;
                        }   
                        else if(!card.compare("A")&&((total2+11)<=21)){
                            total2=total2+11;
                        }
                        else if(!card.compare("A")&&((total2+11)>21)){
                            total2=total2+1;
                        }
                        else{
                            total2=total2+stoi(card);
                        }
                        hand2=hand2+(card+suit);
                        cout<<setw(7)<<card+suit<<endl;
                        bust1=true;
                    }
                    else{
                        cout<<"you can only double down on your first turn";
                    }
                    break;
                case 's':
                    bust1=true;
                    break;
                default:
                    bust1=true;
                    break;
                    
            }}
        turn=0;
        num4=0;
            while(split1&&bust2!=true){
                turn=turn+1;
                if(turn==1){
                    cout<<"How much would you like to bet?"<<endl;
                    cin>>bet2;
                }
                total3=total3+stoi(hand3.substr(0,1));
                if(hand3.length()>2&&turn==1){
                    hand4=hand3;
                    hand4.erase(0,2);
                    hand3=hand3.substr(0,2);
                    split2=true;
                }
                cout<<"******************"<<endl;
                cout<<"*Player's Split 1*"<<endl;
                cout<<"******************"<<endl;
                cout<<setw(4)<<hand3<<" ";
                //Find a way to check if they can split Error!
                num2=0;
                count=0;
                for(int i=0;i<(hand2.length())/2;i++){
                    num3=0;
                    check1=hand3.substr(num2,1);
                    for(int j=0;j<(hand3.length())/2;j++){
                        check2=hand3.substr(num3,1);
                        if(!check1.compare(check2)){
                            count=count+1;
                            num4=num3;
                        }
                        num3=num3+2;
                    }
                    num2=num2+2;
                }
                if(count>2&&split<=3){
                    cout<<"Would you like to split?(y/n)";
                    cin>>answer2;
                    if(answer2=='y'){
                        hand4=hand3.substr(num4,2);
                        total3=total3-stoi(hand3.substr(num4,1));
                        hand3.erase(num4,2);
                        cout<<endl;
                        cout<<"******************"<<endl;
                        cout<<"*Player's Split 1*"<<endl;
                        cout<<"******************"<<endl;
                        cout<<setw(4)<<hand3<<" ";
                        split2=true;
                        turn=turn+1;
                        split=split+1;
                    } 
                }
                cout<<endl;
                cout<<"Would you like to hit(h),stay(s),or double down(d)"<<endl;
                cin>>answer;
                switch(answer){
                    case 'h':
                        if(total3<21){
                            length1=deck.length();
                            num1=rand()%length1;
                            if(num1%2!=0){
                                num1=num1-1;
                                card=deck.substr(num1,1);
                                suit=deck.substr(num1+1,1);
                                deck.erase(num1,2);
                            }
                            else{
                                card=deck.substr(num1,1);
                                suit=deck.substr(num1+1,1);
                                deck.erase(num1,2);
                            }
                            if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                                total3=total3+10;
                            }   
                            else if(!card.compare("A")&&((total2+11)<=21)){
                                total3=total3+11;
                            }
                            else if(!card.compare("A")&&((total2+11)>21)){
                                total3=total3+1;
                            }
                            else{
                                total3=total3+stoi(card);
                            }
                            hand3=hand3+(card+suit);
                            cout<<card+suit<<" ";
                        }
                        else{
                            bust2=true;
                        }
                        break;
                    case 'd':
                        if(turn==1){
                            bet2=bet2*2;
                            for(int i=0;i<2;i++){
                                length1=deck.length();
                                num1=rand()%length1;
                                if(num1%2!=0){
                                    num1=num1-1;
                                    card=deck.substr(num1,1);
                                    suit=deck.substr(num1+1,1);
                                    deck.erase(num1,2);
                                }
                                else{
                                    card=deck.substr(num1,1);
                                    suit=deck.substr(num1+1,1);
                                    deck.erase(num1,2);
                                }
                                if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                                    total3=total3+10;
                                }   
                                else if(!card.compare("A")&&((total3+11)<=21)){
                                    total3=total3+11;
                                }
                                else if(!card.compare("A")&&((total3+11)>21)){
                                    total3=total3+1;
                                }
                                else{
                                    total3=total3+stoi(card);
                                }
                                hand3=hand3+(card+suit);
                                cout<<card+suit<<" ";
                            }
                            bust2=true;
                        }
                        else{
                            cout<<"you can only double down on your first turn";
                        }
                        break;
                    case 's':
                        bust2=true;
                        break;
                    default:
                        bust2=true;
                        break;
                    }
                  
            }
            turn=0;
            num4=0;
            while(split2&&bust3!=true){
                turn=turn+1;
                if(turn==1){
                    cout<<"How much would you like to bet?"<<endl;
                    cin>>bet3;
                }
                total4=total4+stoi(hand4.substr(0,1));
                if(hand4.length()>2&&turn==1){
                    hand5=hand4;
                    hand5.erase(0,2);
                    hand4=hand4.substr(0,2);
                    split3=true;
                }
                cout<<"******************"<<endl;
                cout<<"*Player's Split 2*"<<endl;
                cout<<"******************"<<endl;
                cout<<setw(4)<<hand4<<" ";

                //Find a way to check if they can split Error!
                num2=0;
                count=0;
                for(int i=0;i<(hand2.length())/2;i++){
                    num3=0;
                    check1=hand4.substr(num2,1);
                    for(int j=0;j<(hand4.length())/2;j++){
                        check2=hand4.substr(num3,1);
                        if(!check1.compare(check2)){
                            count=count+1;
                            num4=num3;
                        }
                        num3=num3+2;
                    }
                    num2=num2+2;
                }
                if(count>2&&split<=3){
                    cout<<"Would you like to split?(y/n)";
                    cin>>answer;
                    if(answer=='y'){
                        hand5=hand4.substr(num4,2);
                        hand4.erase(num4,2);
                        split3=true;
                        total4=total4-stoi(hand4.substr(num4,1));
                        cout<<endl;
                        cout<<"******************"<<endl;
                        cout<<"*Player's Split 2*"<<endl;
                        cout<<"******************"<<endl;
                        cout<<setw(4)<<hand4<<" ";
                        turn=turn+1;
                        split=split+1;
                    } 
                }
                cout<<endl;
                cout<<"Would you like to hit(h),stay(s),or double down(d)"<<endl;
                cin>>answer;
                switch(answer){
                    case 'h':
                        if(total4<21){
                            length1=deck.length();
                            num1=rand()%length1;
                            if(num1%2!=0){
                                num1=num1-1;
                                card=deck.substr(num1,1);
                                suit=deck.substr(num1+1,1);
                                deck.erase(num1,2);
                            }
                            else{
                                card=deck.substr(num1,1);
                                suit=deck.substr(num1+1,1);
                                deck.erase(num1,2);
                            }
                            if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                                total4=total4+10;
                            }   
                            else if(!card.compare("A")&&((total2+11)<=21)){
                                total4=total4+11;
                            }
                            else if(!card.compare("A")&&((total2+11)>21)){
                                total4=total4+1;
                            }
                            else{
                                total4+total4+stoi(card);
                            }
                            hand4=hand4+(card+suit);
                            cout<<card+suit<<" " ;
                        }
                        else{
                            bust3=true;
                        }
                        break;
                    case 'd':
                        if(turn==1){
                            bet3=bet3*2;
                            for(int i=0;i<2;i++){
                                length1=deck.length();
                                num1=rand()%length1;
                                if(num1%2!=0){
                                    num1=num1-1;
                                    card=deck.substr(num1,1);
                                    suit=deck.substr(num1+1,1);
                                    deck.erase(num1,2);
                                }
                                else{
                                    card=deck.substr(num1,1);
                                    suit=deck.substr(num1+1,1);
                                    deck.erase(num1,2);
                                }
                                if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                                    total4=total4+10;
                                }   
                                else if(!card.compare("A")&&((total4+11)<=21)){
                                    total4=total4+11;
                                }
                                else if(!card.compare("A")&&((total3+11)>21)){
                                    total4=total4+1;
                                }
                                else{
                                    total4=total4+stoi(card);
                                }
                                hand4=hand4+(card+suit);
                                cout<<card+suit<<" ";
                            
                            }bust3=true;}
                        else{
                            cout<<"you can only double down on your first turn";
                        }
                        break;
                    case 's':
                        bust3=true;
                        break;
                    default:
                        bust3=true;
                        break;
                    }
                
            }
            turn=0;
            num4=0;
            while(split3&&bust4!=true){
                turn=turn+1;
                if(turn==1){
                    cout<<"How much would you like to bet?"<<endl;
                    cin>>bet4;
                }
                
                total5=total5+stoi(hand5.substr(0,1));
          
                cout<<"******************"<<endl;
                cout<<"*Player's Split 3*"<<endl;
                cout<<"******************"<<endl;
                //Find a way to check if they can split Error!
                num2=0;
                count=0;
                cout<<endl;
                cout<<"Would you like to hit(h),stay(s),or double down(d)"<<endl;
                cin>>answer;
                switch(answer){
                    case 'h':
                        if(total5<21){
                            length1=deck.length();
                            num1=rand()%length1;
                            if(num1%2!=0){
                                num1=num1-1;
                                card=deck.substr(num1,1);
                                suit=deck.substr(num1+1,1);
                                deck.erase(num1,2);
                            }
                            else{
                                card=deck.substr(num1,1);
                                suit=deck.substr(num1+1,1);
                                deck.erase(num1,2);
                            }
                            if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                                total5=total5+10;
                            }   
                            else if(!card.compare("A")&&((total2+11)<=21)){
                                total5=total5+11;
                            }
                            else if(!card.compare("A")&&((total2+11)>21)){
                                total5=total5+1;
                            }
                            else{
                                total5=total5+stoi(card);
                            }
                            hand5=hand5+(card+suit);
                            cout<<card+suit<<" ";
                        }
                        else{
                            bust4=true;
                        }
                        break;
                    case 'd':
                        if(turn==1){
                            bet4=bet4*2;
                            for(int i=0;i<2;i++){
                                length1=deck.length();
                                num1=rand()%length1;
                                if(num1%2!=0){
                                    num1=num1-1;
                                    card=deck.substr(num1,1);
                                    suit=deck.substr(num1+1,1);
                                    deck.erase(num1,2);
                                }
                                else{
                                    card=deck.substr(num1,1);
                                    suit=deck.substr(num1+1,1);
                                    deck.erase(num1,2);
                                }
                                if(!card.compare("1")||!card.compare("J")||!card.compare("Q")||!card.compare("K")){
                                    total5=total5+10;
                                }   
                                else if(!card.compare("A")&&((total3+11)<=21)){
                                    total5=total5+11;
                                }
                                else if(!card.compare("A")&&((total3+11)>21)){
                                    total5=total5+1;
                                }
                                else{
                                    total5=total5+stoi(card);
                                }
                                hand5=hand5+(card+suit);
                                cout<<card+suit<<" ";

                            }
                            bust4=true;}
                        else{
                            cout<<"you can only double down on your first turn";
                        }
                        break;
                    case 's':
                        bust4=true;
                        break;
                    default:
                        bust4=true;
                        break;
                    }
            }
        cout<<endl;
        cout<<"***************"<<endl;
        cout<<"*Dealer's Hand*"<<endl;
        cout<<"***************"<<endl;
        cout<<setw(10)<<hand1<<endl;
        cout<<value1;
        cout<<total2;
        if(value1>total2){//Player Hand1
            cout<<"Player Hand 1 loss -$"<<bet1<<endl;
        }
        else if(value1<total2&&total2<=21){
            cout<<"Player Hand 1 won $"<<bet1*1.5<<endl;
        }
        else{
            cout<<"No body won"<<endl;
        }
        if(value1>total3&&split1){
            cout<<"Player Split 1 loss -$"<<bet2<<endl;
        }
        else if(value1<total3&&total2<=21&&split1){
            cout<<"Player Split 1 won $"<<bet2*1.5<<endl;
        }
        else if(split1){
            cout<<"No body won"<<endl;
        }
        if(value1>total4&&split2){
            cout<<"Player Split 2 loss -$"<<bet3<<endl;
        }
        else if(value1<total4&&total4<=21&&split2){
            cout<<"Player Split 2 won $"<<bet3*1.5<<endl;
        }
      
        else if(split2){
            cout<<"No body won"<<endl;
        }
        if(value1>total5&&split3){//Player Hand1
            cout<<"Player Split 3 loss -$"<<bet4<<endl;
        }
        else if(value1<total5&&total5<=21&&split3){
            cout<<"Player Hand 3 won $"<<bet4*1.5<<endl;
        }
        else if(split3){
            cout<<"No body won"<<endl;
        }
        
        cout<<"Would you like to play again?(y,n)";
        cin>>answer2; 
        if(answer2=='y'){
            dealout=false;
        }
        else if(answer2=='n'){
            dealout=true;
        }
        else{
            dealout=true;
        }
    
    }while(dealout!=true);//End of Program
    
    
    return 0;
    }

