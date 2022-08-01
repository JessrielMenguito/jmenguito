/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on June 27, 2022, 6:23 PM
 * Purpose: C++ Template - To be used in all future Assignments
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
 
//Function Prototypes
void roll();
void ship(int);
void ship2(int);
void ship3(int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the RAndom Number Seed
    
    //Declare Variables
    int d1,d2,d3,d4,d5,r1,r2,r3;
    int die,count,count2,choice;
    int const   game=1,
                rules=2;
    //Initialize Variables
    srand(time(0)); 
    
    //Map inputs to outputs -> The Process
    cout<<"Ship Captain Crew Dice Game"<<endl<<endl;
    cout<<"1. Start Game"<<endl;
    cout<<"2. Rules"<<endl;
    cout<<endl<<"Enter your choice."<<endl<<endl;
    cin>>choice;
    
    switch(choice){
    case game:
    cout<<endl<<"First Roll"<<endl<<endl; 
    count=0;
    die=6;
    d1=rand()%die+1;
    d2=rand()%die+1;
    d3=rand()%die+1;
    d4=rand()%die+1;
    d5=rand()%die+1;
    
    //First Roll -------------------------------------------------------------------
    cout << "Die 1 = "<<d1<<endl;
    cout << "Die 2 = "<<d2<<endl;
    cout << "Die 3 = "<<d3<<endl;
    cout << "Die 4 = "<<d4<<endl;
    cout << "Die 5 = "<<d5<<endl;
    cout<<endl;
    
    if (d1==6||d2==6||d3==6||d4==6||d5==6){
        cout<<"You have the Ship!"<<endl;
        count+=1;
        {
         if (d1==5||d2==5||d3==5||d4==5||d5==5){
        cout<<"You have the Captain!"<<endl;
        count+=1;
        {
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            }
        }
        }   
        }
    }
    if (count==3){
        r1=d1+d2+d3+d4+d5-6-5-4;
        cout<<"Your score is "<<r1<<"."<<endl<<endl;
    }    
    else if (count==2){
        ship3(count);      
    }
    else if (count==1){
        ship2(count);
    }
    else 
        ship(count);       
        
    //Second Roll -------------------------------------------------------------------
    cout<<"Second Roll"<<endl<<endl; 
    die=6;
    d1=rand()%die+1;
    d2=rand()%die+1;
    d3=rand()%die+1;
    d4=rand()%die+1;
    d5=rand()%die+1;
    
    cout << "Die 1 = "<<d1<<endl;
    cout << "Die 2 = "<<d2<<endl;
    cout << "Die 3 = "<<d3<<endl;
    cout << "Die 4 = "<<d4<<endl;
    cout << "Die 5 = "<<d5<<endl;
    cout<<endl;
    
    //If you do not have the ship, captain or crew in the first roll
    if (count==0){
    if (d1==6||d2==6||d3==6||d4==6||d5==6){
        cout<<"You have the Ship!"<<endl;
        count+=1;
        {
         if (d1==5||d2==5||d3==5||d4==5||d5==5){
        cout<<"You have the Captain!"<<endl;
        count+=1;
        {
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            }
        }
        }   
        }
    }
    }
    //If you only got the ship in the last roll
    if (count==1)
        {
         if (d1==5||d2==5||d3==5||d4==5||d5==5){
        cout<<"You have the Captain!"<<endl;
        count+=1;
        {
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            r2=r1+d1+d2+d3+d4+d5-5-4;
            cout<<"Your score is "<<r2<<"."<<endl<<endl;
            }
        }
        }   
        }
    //If you only need the crew
    if (count==2){
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            r2=r1+d1+d2+d3+d4+d5-4;
            cout<<"Your score is "<<r2<<"."<<endl<<endl;
            }
        }
    //If you have all three
    if (count==3){
        r2=r1+d1+d2+d3+d4+d5;
        cout<<"Your score is "<<r2<<"."<<endl<<endl;
    }
    else if (count==2){
        ship3(count);      
    }
    else if (count==1){
        ship2(count);
    }
    else 
        ship(count);   
       
//Third Roll -------------------------------------------------------------------
    cout<<"Third Roll"<<endl<<endl; 
    die=6;
    d1=rand()%die+1;
    d2=rand()%die+1;
    d3=rand()%die+1;
    d4=rand()%die+1;
    d5=rand()%die+1;
    
    cout << "Die 1 = "<<d1<<endl;
    cout << "Die 2 = "<<d2<<endl;
    cout << "Die 3 = "<<d3<<endl;
    cout << "Die 4 = "<<d4<<endl;
    cout << "Die 5 = "<<d5<<endl;
    cout<<endl;
    
    //If you do not have the ship, captain or crew in the first roll
    if (count==0){
    if (d1==6||d2==6||d3==6||d4==6||d5==6){
        cout<<"You have the Ship!"<<endl;
        count+=1;
        {
         if (d1==5||d2==5||d3==5||d4==5||d5==5){
        cout<<"You have the Captain!"<<endl;
        count+=1;
        {
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            }
        }
        }   
        }
    }
    }
    //If you only got the ship in the last roll
    if (count==1)
        {
         if (d1==5||d2==5||d3==5||d4==5||d5==5){
        cout<<"You have the Captain!"<<endl;
        count+=1;
        {
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            r3=r2+r1+d1+d2+d3+d4+d5-5-4;
            cout<<"Your score is "<<r3<<"."<<endl<<endl;
            }
        }
        }   
        }
    if (count==2){
            if (d1==4||d2==4||d3==4||d4==4||d5==4){
            cout<<"You have the Crew!"<<endl;
            count+=1;
            r3=r2+r1+d1+d2+d3+d4+d5-4;
            cout<<"Your score is "<<r3<<"."<<endl<<endl;
            }
        }
    if (count==3){
        r3=r2+r1+d1+d2+d3+d4+d5;
        cout<<"Your score is "<<r3<<"."<<endl<<endl;
    }
    else if (count==2){
        ship3(count);      
    }
    else if (count==1){
        ship2(count);
    }
    else 
        ship(count);  
    break;
    
    
    case rules:
    cout<<endl<<"1. Each player takes a turn rolling a set of five dice. "<<endl;
    cout<<"Each turn consists of three shakes to accrue points."<<endl<<endl;
    cout<<"2. The dice are rolled. You are looking for your "<<endl;
    cout<<"ship (6), your captain (5) and your crew (4). "<<endl;
    cout<<"You must get each before you can accumulate any points, and "<<endl;
    cout<<"they must be rolled in order-you'll need a ship before you can"<<endl; 
    cout<<"have a captain and a captain before you can get a crew. Points "<<endl;
    cout<<"are only tallied from the last two dice. Highest score possible is 12."<<endl<<endl;
    cout<<"3. If you get all three (captain, ship and crew) in your first roll, "<<endl;
    cout<<"you have two more shakes to get points. If you get only the ship, you "<<endl;
    cout<<"need to find the captain and the crew before you can rack up any points. "<<endl;
    cout<<"In turn, if you get only the captain or the crew, all five dice need "<<endl;
    cout<<"to be rolled again; you need to secure a ship first."<<endl<<endl;
    cout<<"4. If you are unable to get the ship, captain and crew in your "<<endl;
    cout<<"three rolls, the dice are turned over to the next player and you are "<<endl;
    cout<<"awarded no points for the round. Highest total points win."<<endl<<endl;
    break;
    }
    //Display Results
    
    //Exit stage right    
    return 0;
}
void ship(int count){
    cout<<"You still need the Ship, Captain and Crew."<<endl;
    cout<<"Your score is 0"<<endl<<endl;
    
} 
void ship2(int count){
    cout<<"You still need the Captain and Crew."<<endl;
        cout<<"Your score is 0"<<endl<<endl;
        
}
void ship3(int count){
    cout<<"You still need the Crew."<<endl;
        cout<<"Your score is 0"<<endl<<endl;
        
}