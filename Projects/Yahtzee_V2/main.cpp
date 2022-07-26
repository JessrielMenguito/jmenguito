/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 25, 2022, 6:23 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */
#include <iostream>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;
//User Libraries
//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
//Function Prototypes
void dice(int,int,int,int,int,bool,bool,bool,bool,bool);
void dice2(int,int,int,int,int,bool,bool,bool,bool,bool);
void dice3(int,int,int,int,int,bool,bool,bool,bool,bool);
//Execution Begins Here
int main(int argc, char** argv) {
    ofstream outputFile;
    outputFile.open("YahtzeeScore.txt");
    //Initialize the RAndom Number Seed
    //Declare Variables
    int d1,d2,d3,d4,d5,round,loop1=0,fin;
    int choice1,pick,count,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0,t10=0,t11=0;
    int die,count1,count2=0,choice=5;
    string title;
    bool o1=true,o2=true,o3=true,o4=true,o5=true;
    char yn,y,n;
    int const   game=1,
                rules=2;
    //Initialize Variables
    srand(time(0)); 
    die=6;  //How many dice and reroll
        d1=rand()%die+1;
        d2=rand()%die+1;
        d3=rand()%die+1;
        d4=rand()%die+1;
        d5=rand()%die+1; 
title="Let's Play Yahtzee!";     //Title can be changed   

//Map inputs to outputs -> The Process
    cout<<endl<<title<<endl<<endl;
    do{ //Main Loop
        round=3;
        dice3(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);
        dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);
        cout<<endl;    
        cout<<"How many numbers do you want to bank?"<<endl;
        do{ //Check to see if user inputs a number 5 or less
            cin>>choice1;   //User input how many numbers
            if(choice1>5){
                cout<<"Please choose a number between 0 and 5"<<endl;
            }
        }while (choice1<0||choice1>5); //while loop to check what dice to remove
        cout<<endl<<"You want to bank "<<choice1<<" numbers."<<endl;
        if (choice1>0){ //User input
            for (loop1=0;loop1<choice1;loop1++){ //Loop the dice to remove
            cout<<"Which numbers do you want to bank?"<<endl<<endl;  
            dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);//Call dice bank
            cout<<endl;
            do{ 
            cin>>pick; //User input which die to pick
                if(choice1>5){
                    cout<<"Please choose a number between 0 and 5"<<endl;
                }
            }while(pick>5); //Verify if input is less than 5
                if (pick==1){//Die 1
                o1=false;    
                }
                if (pick==2){//Die 2
                o2=false;    
                }
                if (pick==3){//Die 3
                o3=false;    
                }
                if (pick==4){//Die 4
                o4=false;    
                }
                if (pick==5){//Die 5
                o5=false;    
                }
            }
        }
        dice2(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);   //Call dice bank 2 to show what was set aside 
        cout<<endl<<"Reroll?"<<endl<<endl;
        cout<<"Type n for No and any key for yes."<<endl<<endl; //Ask the user if they want a reroll
        cin>>yn;
        if (yn=='n'||yn=='N'){
            count2=round;
        }
        else
        count2++;
    }while (count2<round);
    cout<<endl<<"Your final dice numbers are:"<<endl;
    cout << "Die 1 = "<<d1<<endl;
    cout << "Die 2 = "<<d2<<endl;
    cout << "Die 3 = "<<d3<<endl;
    cout << "Die 4 = "<<d4<<endl;
    cout << "Die 5 = "<<d5<<endl<<endl;
    //Scoring Below
    cout<<fixed<<setw(30)<<right;
    if (d1==1||d2==1||d3==1||d4==1||d5==1){//Check to see if number is equal to one
        if (d1==1){//check die 1
            t1+=1;
        }
        if (d2==1){//check die 2
            t1+=1;
        }
        if (d3==1){//check die 3
            t1+=1;
        }
        if (d4==1){//check die 4
            t1+=1;
        }
        if (d5==1){//check die 5
            t1+=1;
        }
    cout << "Aces (1) = "<<t1<<endl;   //output if there are any ones 
    }
    if (d1==2||d2==2||d3==2||d4==2||d5==2){ //check to see if number is equal to two
        if (d1==2){//check die 1
            t2+=2;
        }
        if (d2==2){//check die 2
            t2+=2;
        }
        if (d3==2){//check die 3
            t2+=2;
        }
        if (d4==2){//check die 4
            t2+=2;
        }
        if (d5==2){//check die 5
            t2+=2;
        }
    cout <<fixed<<setw(30)<<right<< "Twos (2) = "<<t2<<endl;
    }
    if (d1==3||d2==3||d3==3||d4==3||d5==3){ //check to see if the number is equal to three
        if (d1==3){//check die 1
            t3+=3;
        }
        if (d2==3){//check die 2
            t3+=3;
        }
        if (d3==3){//check die 3
            t3+=3;
        }
        if (d4==3){//check die 4
            t3+=3;
        }
        if (d5==3){//check die 5
            t3+=3;
        }
    cout <<fixed<<setw(30)<<right<< "Threes (2) = "<<t3<<endl;
    }    
        if (d1==4||d2==4||d3==4||d4==4||d5==4){//check to see if the number is equal to four
        if (d1==4){//check die 1
            t4+=4;
        }
        if (d2==4){//check die 2
            t4+=4;
        }
        if (d3==4){//check die 3
            t4+=4;
        }
        if (d4==4){//check die 4
            t4+=4;
        }
        if (d5==4){//check die 5
            t4+=4;
        }
    cout <<fixed<<setw(30)<<right<< "Fours (4) = "<<t4<<endl;
    }
        if (d1==5||d2==5||d3==5||d4==5||d5==5){//check to see if the number is equal to five
        if (d1==5){//check die 1
            t5+=5;
        }
        if (d2==5){//check die 2
            t5+=5;
        }
        if (d3==5){//check die 3
            t5+=5;
        }
        if (d4==5){//check die 4
            t5+=5;
        }
        if (d5==5){//check die 5
            t5+=5;
        }
    cout <<fixed<<setw(30)<<right<< "Fives (5) = "<<t5<<endl;
    }
        if (d1==6||d2==6||d3==6||d4==6||d5==6){//check to see if the number is equal to six
        if (d1==6){//check die 1
            t6+=6;
        }
        if (d2==6){//check die 2
            t6+=6;
        }
        if (d3==6){//check die 3
            t6+=6;
        }
        if (d4==6){//check die 4
            t6+=6;
        }
        if (d5==6){//check die 5
            t6+=6;
        }
    cout <<fixed<<setw(30)<<right<< "Six (6) = "<<t6<<endl;
    }
    t7=t1+t2+t3+t4+t5;
    if (t7>63){//see if the user has scored over 63
        t7+=63;
    cout <<fixed<<setw(30)<<right<< "Bonus 35 points if total score is 63 or over = "<<endl;
    }
    cout <<fixed<<setw(30)<<right<< "Total Of Upper Section --> "<<t7<<endl;
    if (d1==d2==d3||d1==d2==d4||d1==d2==d5||d2==d3==d4||d2==d3==d5||d1==d4==d5||d2==d4==d5){//check if there are three of the same
        if (d1==d2==d3){//check triplet 1
            t8=d1+d2+d3;
        }
        else if (d1==d2==d4){//check triplet 2
            t8=d1+d2+d4;
        }
        else if (d1==d2==d5){//check triplet 3
            t8=d1+d2+d5;
        }
        else if (d2==d3==d4){//check triplet 4
            t8=d2+d3+d4;
        }
        else if (d2==d3==d5){//check triplet 5
            t8=d2+d3+d5;
        }
        else if (d1==d4==d5){//check triplet 6
            t8=d1+d4+d5;
        }
        else if (d2==d4==d5){//check triplet 7
            t8=d2+d4+d5;
        }
        else{
            cout<<"error";
        }
        cout<<fixed<<setw(30)<<right<<"3 of a kind (Add total of all dice) = "<<t8<<endl;    
        }
    if (d1==d2==d3==d4||d1==d2==d3==d5||d1==d2==d4==d5||d1==d3==d4==d5||d2==d3==d4==d5){
        if (d1==d2==d3==d4){//check quad 1
            t9=d1+d2+d3+d4;
        }
        if (d1==d2==d3==d5){//check quad 2
            t9=d1+d2+d3+d5;
        }
        if (d1==d2==d4==d5){//check quad 3
            t9=d1+d2+d4+d5;
        }
        if (d1==d3==d4==d5){//check quad 4
            t9=d1+d3+d4+d5;
        }
        if (d2==d3==d4==d5){//check quad 5
            t9=d2+d3+d4+d5;
        }
        cout<<fixed<<setw(30)<<right<<"4 of a kind (Add total of all dice) = "<<t9<<endl;    
        }
        if (d1==d2==d3||d1==d2==d4||d1==d2==d5||d2==d3==d4||d2==d3==d5||d1==d4==d5||d2==d4==d5){//Check for a triplet first
        if (d1==d2==d3){
            if (d4==d5){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        if (d1==d2==d4){
            if (d3==d5){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        if (d1==d2==d5){
            if (d4==d3){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        if (d2==d3==d4){
            if (d1==d5){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        if (d2==d3==d5){
            if (d4==d1){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        if (d1==d4==d5){
            if (d2==d3){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        if (d2==d4==d5){
            if (d1==d3){//Check if there is a pair with the remaining
            t10=d1+d2+d3+d4+d5;    
            }
        }
        cout<<fixed<<setw(30)<<right<<"Full House (Score 25) = "<<t10<<endl;    
        }
    if (t10==10||t10==14){//Sum of 1-4=10, Sum of 2-5=14
        t10+=25;
        cout <<fixed<<setw(30)<<right<< "SM Straight (Sequence of 5)(Score 30) = "<<t10<<endl;
    }
    if (t10==15){//Sum of 1-5=15
        t10+=40;
        cout <<fixed<<setw(30)<<right<< "LG Straight (Sequence of 5)(Score 40) = "<<t10<<endl;
    }
    if (d1==d2==d3==d4==d5){//If all of the numbers are the same
        t10+=50;
        cout <<fixed<<setw(30)<<right<< "Yahtzee!= 50 Points"<<d3<<endl;  
    }
    cout <<fixed<<setw(30)<<right<< "Chance = "<<d1+d2+d3+d4+d5<<endl;    
    
    t11=t10+t9+t8+t7+t6+t5+t4+t3+t2+t1;//Add all totals together
    cout<<fixed<<setw(30)<<right<<"Total of Lower Section --> "<<t11;
    fin=t7+t11;
    cout<<fixed<<setw(30)<<right<<endl<<"Grand Total --> "<<fin;
    outputFile<<fin;
    //Close the file
    outputFile.close();
    //Display Results
    //Exit stage right    
    return 0;
}
void dice(int d1,int d2,int d3,int d4,int d5,bool o1,bool o2,bool o3,bool o4,bool o5){
    if (o1==true)
        cout << "Die 1 = "<<d1<<endl;
    if (o2==true)
        cout << "Die 2 = "<<d2<<endl;
    if (o3==true)
        cout << "Die 3 = "<<d3<<endl;
    if (o4==true)
        cout << "Die 4 = "<<d4<<endl;
    if (o5==true)
        cout << "Die 5 = "<<d5<<endl;
}
void dice2(int d1,int d2,int d3,int d4,int d5,bool o1,bool o2,bool o3,bool o4,bool o5){
    cout<<"You have banked"<<endl;
    if (o1==false)
        cout << "Die 1 = "<<d1<<endl;
    if (o2==false)
        cout << "Die 2 = "<<d2<<endl;
    if (o3==false)
        cout << "Die 3 = "<<d3<<endl;
    if (o4==false)
        cout << "Die 4 = "<<d4<<endl;
    if (o5==false)
        cout << "Die 5 = "<<d5<<endl;
}
void dice3(int d1,int d2,int d3,int d4,int d5,bool o1,bool o2,bool o3,bool o4,bool o5){
    int die=6;
    if (o1==true)
        d1=rand()%die+1;
    if (o2==true)
        d2=rand()%die+1;
    if (o3==true)
        d3=rand()%die+1;
    if (o4==true)
        d4=rand()%die+1;
    if (o5==true)
        d5=rand()%die+1;
}
        
        
        
        
        