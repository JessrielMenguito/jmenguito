/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on June 27, 2022, 6:23 PM
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
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the RAndom Number Seed
    
    //Declare Variables
    int d1,d2,d3,d4,d5,round,loop1=0;
    int choice1,pick,count,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0;
    int die,count1,count2=0,choice=5;
    bool o1=true,o2=true,o3=true,o4=true,o5=true;
    char yn,y,n;
    int const   game=1,
                rules=2;
    //Initialize Variables
    srand(time(0)); 
     

    
//Map inputs to outputs -> The Process
    cout<<endl<<"Let's Play Yahtzee!"<<endl<<endl;
    do{
        die=6;  //How many dice and reroll
        d1=rand()%die+1;
        d2=rand()%die+1;
        d3=rand()%die+1;
        d4=rand()%die+1;
        d5=rand()%die+1;
        round=3;

        dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);

        cout<<endl;    
        cout<<"How many numbers do you want to bank?"<<endl;
        do{
            cin>>choice1;   //User input how many numbers
            if(choice1>5){
                cout<<"Please choose a number between 0 and 5"<<endl;
            }
        }while (choice1<0||choice1>5);

        cout<<endl<<"You want to bank "<<choice1<<" numbers."<<endl;
        if (choice1>0){
            for (loop1=0;loop1<choice1;loop1++){ //Loop the dice to remove
            cout<<"Which numbers do you want to bank?"<<endl<<endl;  
            dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);//Call dice bank
            cout<<endl;
            do{ 
            cin>>pick;
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
        dice2(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);    
        cout<<"Reroll?"<<endl<<endl;
        cout<<"Type n for No and any key for yes."<<endl;
        cin>>yn;
        if (yn=='n'||yn=='N'){
            count2=round;
        }    
        count2++;

    }while (count2<round);
    
    cout<<endl<<"Your final dice numbers are:"<<endl;
    cout << "Die 1 = "<<d1<<endl;
    cout << "Die 2 = "<<d2<<endl;
    cout << "Die 3 = "<<d3<<endl;
    cout << "Die 4 = "<<d4<<endl;
    cout << "Die 5 = "<<d5<<endl<<endl;
    if ()
    cout << "Aces = 1"<<endl;
    cout << "Twos = 2"<<endl;
    cout << "Threes = 3"<<endl;
    cout << "Fours = 4"<<endl;
    cout << "Fives = 5"<<endl;
    cout << "Sixes = 6"<<endl<<endl;
    cout << "Total Score --> "<<endl;
    cout << "Bonus 35 points if total score is 63 or over = "<<endl;
    cout << "Total Of Upper Section --> "<<d2<<endl;
    cout << "3 of a kind (Add total of all dice) "<<endl;
    cout << "4 of a kind (Add total of all dice) "<<endl;
    cout << "Full House (Score 25)"<<d1<<endl;
    cout << "SM Straight (Sequence of 4)(Score 30)"<<endl;
    cout << "LG Straight (Sequence of 5)(Score 40)"<<endl;
    
    if (d1==d2==d3==d4==d5){
        cout << "Yahtzee!= 50 Points"<<d3<<endl;  
        t1+=50;
    }
    cout << "Chance = "<<d1+d2+d3+d4+d5<<endl;    
    
    
    }
    
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