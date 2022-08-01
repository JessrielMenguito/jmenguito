/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on June 5, 2022, 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap3_Prob10_Temp
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    float C,F;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cin>>F;
    //Map inputs -> outputs
    C = 5*(F-32)/9;
    //Display the outputs
cout<<"Temperature Converter"<<endl;
cout<<"Input Degrees Fahrenheit"<<endl;
cout<<fixed<<showpoint<<setprecision(1)<<F<<" Degrees Fahrenheit = "<<C<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}