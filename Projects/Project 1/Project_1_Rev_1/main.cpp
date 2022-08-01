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
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the RAndom Number Seed
    
    //Declare Variables
    int d1,d2,d3,d4,d5,r1;
    int die,count;
    //Initialize Variables
    srand(time(0)); 
    
    //Map inputs to outputs -> The Process
    cout<<"First Roll"<<endl<<endl; 
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
        cout<<"You still need the Crew."<<endl;
        cout<<"Your score is 0"<<endl<<endl;
        cout<<"count="<<count<<endl<<endl;        
    }
    else if (count==1){
        cout<<"You still need the Captain and Crew."<<endl;
        cout<<"Your score is 0"<<endl<<endl;
        cout<<"count="<<count<<endl<<endl; 
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
    
    //Second Roll
    cout << "Die 1 = "<<d1<<endl;
    cout << "Die 2 = "<<d2<<endl;
    cout << "Die 3 = "<<d3<<endl;
    cout << "Die 4 = "<<d4<<endl;
    cout << "Die 5 = "<<d5<<endl;
    cout<<endl;
    
    
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
    if (count==3){
        r1+=d1+d2+d3+d4+d5;
        cout<<"Your score is "<<r1<<"."<<endl<<endl;
    }    
    }
    if (count==2);

   
    //Display Results
    cout<<"count="<<count;
    //Exit stage right    
    return 0;
}
void ship(int count){
    cout<<"You still need the Ship, Captain and Crew."<<endl;
    cout<<"Your score is 0"<<endl<<endl;
    cout<<"count="<<count<<endl<<endl;      
} 