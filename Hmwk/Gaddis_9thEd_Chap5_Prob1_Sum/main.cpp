/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob1_Sum
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
    
    //Declare Variables
    int number;
    int start=1;
    int out=0;
    //Initialize or input i.e. set variable values
    cin>>number;
    //Map inputs -> outputs
    for(int start=1;start<=number;start++)
    out+=start;
    //cout<<"number="<<number<<endl;
    //cout<<"start="<<start<<endl;
    //cout<<"out="<<out<<endl;
    
    cout<<"Sum = "<<out;
 
 
    //Exit stage right or left!
    return 0;
}