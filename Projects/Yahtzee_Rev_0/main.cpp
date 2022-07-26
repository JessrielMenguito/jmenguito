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
void dice(int,int,int,int,int,bool,bool,bool,bool,bool);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the RAndom Number Seed
    
    //Declare Variables
    int d1,d2,d3,d4,d5,t1,round;
    int choice1,pick;
    int die,count1,count2,choice=5;
    bool o1=true,o2=true,o3=true,o4=true,o5=true;
    char yn,y,n;
    int const   game=1,
                rules=2;
    //Initialize Variables
    srand(time(0)); 
    cout<<endl<<"First Roll"<<endl<<endl; 
    
    die=6;
    d1=rand()%die+1;
    d2=rand()%die+1;
    d3=rand()%die+1;
    d4=rand()%die+1;
    d5=rand()%die+1;
    round=3;
    
    //Map inputs to outputs -> The Process
    //First Roll -------------------------------------------------------------------
for(int count=0;count<round;count++){
    dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);
              
    cout<<endl;    
    cout<<"How many numbers do you want to bank?"<<endl<<endl;
    do{
        cin>>choice1;
        if(choice1>5){
            cout<<"Please choose a number between 0 and 5"<<endl;
        }
    }while (choice1<0||choice1>5);
    count=0;
    cout<<"Which numbers do you want to bank?"<<endl;
    do{
    if (o1==true)
        cout << "1. Die 1 = "<<d1<<endl;
    if (o2==true)
        cout << "2. Die 2 = "<<d2<<endl;
    if (o3==true)
        cout << "3. Die 3 = "<<d3<<endl;
    if (o4==true)
        cout << "4. Die 4 = "<<d4<<endl;
    if (o5==true)
        cout << "5. Die 5 = "<<d5<<endl;  
    do{
    cin>>pick;
    if (pick==1){
    o1=false;    
    }
    if (pick==2){
    o2=false;    
    }
    if (pick==3){
    o3=false;    
    }
    if (pick==4){
    o4=false;    
    }
    if (pick==5){
    o5=false;    
    }
    if (pick>5){
        cout<<"Pick a choice between 1 and 5."<<endl;
    }
    }while (pick>5);
    
    count++; 
    }while (count<choice);
    cout<<"Reroll?"<<endl<<endl;
    cout<<"Yes=y"<<endl;
    cout<<"No=n"<<endl;
    cin>>yn;
    if (yn=='n')
        count=round;
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