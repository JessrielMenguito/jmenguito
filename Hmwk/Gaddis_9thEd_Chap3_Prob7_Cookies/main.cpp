/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 5, 2022 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap3_Prob7_Cookies
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    float cooktot,calor,calcook,cookeat,caltot;
    //Declare Variables
   
    //Initialize or input i.e. set variable values
    cooktot=40.0;
    calor=300;
    
    //Map inputs -> outputs
    cin>>cookeat;
    calcook=calor/cooktot;
    caltot=calcook*cookeat*10;
    
    //Display the outputs
cout<<"Calorie Counter"<<endl;
cout<<"How many cookies did you eat?"<<endl;
cout<<"You consumed "<<caltot<<" calories.";
    //Exit stage right or left!
    return 0;
}