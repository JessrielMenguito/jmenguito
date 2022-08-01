/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 25, 2022, 6:23 PM
 * Purpose: Project 1 - Yahtzee
 */
//System Libraries
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
    
//Arrays
    int games=13,
        player1[games],
        player2[games];
    
//Initialize the Random Number Seed
    srand(time(0));
    
//Declare Variables    
    float i;
    int d1,d2,d3,d4,d5,loop=0,fin,choice,pick,score;
    int t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0,t10=0,t11=0;
    string title;
    char yn,y,n;
    
    //Initialize Variables
    bool        o1=true,
                o2=true,
                o3=true,
                o4=true,
                o5=true;
    
    const int   game=1,
                rules=2,
                turn=3,     //How many turns
                die=6;      //How many sides on a die
    int         count2=1;   //Starting number for round
   
                

    title="Let's Play Yahtzee!";

//Map inputs to outputs -> The Process
    
    // Output Title
    cout<<endl<<title<<endl<<endl;
    
    //Output Yahtzee Score to text file
    ofstream outputFile;
    outputFile.open("YahtzeeScore.txt");

    //First Roll
    d1=rand()%die+1;
    d2=rand()%die+1;
    d3=rand()%die+1;
    d4=rand()%die+1;
    d5=rand()%die+1; 
    
    //Turn Loop.
    do{
        //Roll dice that have bool true
        int die=6;
        if (o1==1){
            d1=rand()%die+1;
        }
        if (o2==1){
            d2=rand()%die+1;
        }
        if (o3==1){
            d3=rand()%die+1;
        }
        if (o4==1){
            d4=rand()%die+1;
        }
        if (o5==1){
            d5=rand()%die+1;
        }
        
        //Output dice that are not set aside
        dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);
          
        cout<<endl<<"How many numbers do you want to set aside?"<<endl;
        
        //Verify valid input
        while((!(cin>>choice))||(choice<0||choice>5)){
            //Error
            cout<<"Please input a valid number between 0 and 5."<<endl;
            //Clear the previous error
            cin.clear();
            //Discard value
            cin.ignore(123, '\n');
        }
        
        //Confirm choice
        if (choice>0){
            cout<<endl<<"You want to set aside "<<choice<<" numbers."<<endl;
        }       
        
        //Which dice do you want to set aside?
        for (loop=0;loop<choice;loop++){ //Loop the dice to remove
            cout<<"Which numbers do you want to bank?"<<endl<<endl;  
            dice(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);//Call dice bank
            cout<<endl;
            
            //Verify valid input for which die the player will pick
            while((!(cin>>pick))||(pick<0||pick>5)){
                //Error
                cout<<"Please input a valid number between 0 and 5."<<endl;
                //Clear the previous error
                cin.clear();
                //Discard value
                cin.ignore(123, '\n');
                cout<<pick<<endl;
                }
            
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
        
        //cout<<"true or false"<<endl<<o1<<endl<<o2<<endl<<o3<<endl<<o4<<endl<<o5<<endl;
        
        dice2(d1,d2,d3,d4,d5,o1,o2,o3,o4,o5);   //Call dice bank 2 to show what was set aside 
        
        //The player can end their turn here or continue rolling
        cout<<endl<<"Reroll?"<<endl<<endl;
        cout<<"Type n for No and any key for yes."<<endl<<endl; //Ask the user if they want a reroll
        cin>>yn;
        if (yn=='n'||yn=='N'){
            count2=turn;
        }
        else
        count2++;
    }while (count2<turn);
    
    cout<<endl<<"Your final dice numbers are:"<<endl;
    player1[0]=d1;
    cout << "Die 1 = "<<d1<<endl;
    player1[1]=d2;
    cout << "Die 2 = "<<d2<<endl;
    player1[2]=d3;
    cout << "Die 3 = "<<d3<<endl;
    player1[3]=d4;
    cout << "Die 4 = "<<d4<<endl;
    player1[4]=d5;
    cout << "Die 5 = "<<d5<<endl<<endl;
    
    //Scoring Below
    
    cout<<fixed<<setw(50)<<right<<endl<<"---------------------------------------SCORE------"<<endl;
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
    }
    
    t7=t1+t2+t3+t4+t5;
    if (t7>63){//see if the user has scored over 63
        t7+=63;
    }
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
    }
    if (t10==10||t10==14){//Sum of 1-4=10, Sum of 2-5=14
        t10+=25;
    }
    if (t10==15){//Sum of 1-5=15
        t10+=40;
    }
    if (d1==d2==d3==d4==d5){//If all of the numbers are the same
        t10+=50;
    }
    t11=t10+t9+t8+t7+t6+t5+t4+t3+t2+t1;//Add all totals together
    fin=t7+t11;
    
    //Display Results
    cout<<fixed<<setw(50)<<right<<      "1.  Aces (1) = "<<t1<<endl;   //output if there are any ones 
    cout<<fixed<<setw(50)<<right<<      "2.  Twos (2) = "<<t2<<endl;
    cout<<fixed<<setw(50)<<right<<      "3.  Threes (2) = "<<t3<<endl;   
    cout<<fixed<<setw(50)<<right<<      "4.  Fours (4) = "<<t4<<endl;
    cout<<fixed<<setw(50)<<right<<      "5.  Fives (5) = "<<t5<<endl;
    cout<<fixed<<setw(50)<<right<<      "6.  Six (6) = "<<t6<<endl;
    cout<<fixed<<setw(50)<<right<<      "    Bonus 35 points if total score is 63 or over --> "<<endl;
    cout<<fixed<<setw(50)<<right<<      "    Total Of Upper Section --> "<<t7<<endl;
    cout<<fixed<<setw(50)<<right<<      "9.  3 of a kind (Add total of all dice) = "<<t8<<endl; 
    cout<<fixed<<setw(50)<<right<<      "10. 4 of a kind (Add total of all dice) = "<<t9<<endl;  
    cout<<fixed<<setw(50)<<right<<      "11. Full House (Score 25) = "<<t10<<endl; 
    cout<<fixed<<setw(50)<<right<<      "12. SM Straight (Sequence of 5)(Score 30) = "<<t10<<endl;
    cout<<fixed<<setw(50)<<right<<      "13. LG Straight (Sequence of 5)(Score 40) = "<<t10<<endl;
    cout<<fixed<<setw(50)<<right<<      "14. Yahtzee!= 50 Points = "<<d3<<endl;  
    cout<<fixed<<setw(50)<<right<<      "15. Chance = "<<d1+d2+d3+d4+d5<<endl;  
    cout<<fixed<<setw(50)<<right<<      "    Total of Lower Section --> "<<t11;
    cout<<fixed<<setw(50)<<right<<endl<<"    Grand Total --> "<<fin<<endl;
    cout<<fixed<<setw(50)<<left<<endl<< "--------------------------------------------------"<<endl;
    outputFile<<fin;

    
        
        cout<<"Which Score do you want to keep? (Pick one)"<<endl<<endl;
        cout<<"1.  Aces"<<endl;
        cout<<"2.  Twos"<<endl;
        cout<<"3.  Threes"<<endl;
        cout<<"4.  Fours"<<endl;
        cout<<"5.  Fives"<<endl;
        cout<<"6.  Six"<<endl;
        cout<<"7.  3 of a kind (Add total of all dice"<<endl;
        cout<<"8.  4 of a kind (Add total of all dice)"<<endl;  
        cout<<"9.  Full House (Score 25) = "<<endl; 
        cout<<"10. SM Straight (Sequence of 5)(Score 30) = "<<endl;
        cout<<"11. LG Straight (Sequence of 5)(Score 40) = "<<endl;
        cout<<"12. Yahtzee!= 50 Points = "<<endl;  
        cout<<"13. Chance = "<<endl;  
        cout<<fixed<<setw(50)<<left<<endl<<"--------------------------------------------------"<<endl;
        
        //Player picks which score to keep
        //Verify valid input
        while((!(cin>>score))||(score<1||score>13)){
        //Error
        cout<<"Please input a valid number between 1 and 13."<<endl;
        //Clear the previous error
        cin.clear();
        //Discard value
        cin.ignore(123, '\n');
        }
        cout<<"Your choice is "<<score<<endl;
    
    //Close the file
    outputFile.close();
    
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
    cout<<endl;
}
void dice2(int d1,int d2,int d3,int d4,int d5,bool o1,bool o2,bool o3,bool o4,bool o5){
    cout<< "**********************************"<<endl;
    cout<<"You have set aside dice numbers:"<<endl;
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
    if (o5==false&&o4==false&&o3==false&&o2==false&&o1==false)
        cout<< "No numbers set aside."<<endl;
    cout<< "**********************************"<<endl;
    cout<<endl;
}

