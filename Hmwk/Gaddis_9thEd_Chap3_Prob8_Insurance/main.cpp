/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 5, 2022, 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap3_Prob8_Insurance
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int input1,insur;
    //Initialize or input i.e. set variable values
    cin>>input1;
    //Map inputs -> outputs
    insur=input1*0.80;
    //Display the outputs
cout<<"Insurance Calculator"<<endl;
cout<<"How much is your house worth?"<<endl;
cout<<"You need $"<<insur<<" of insurance.";
    //Exit stage right or left!
    return 0;
}