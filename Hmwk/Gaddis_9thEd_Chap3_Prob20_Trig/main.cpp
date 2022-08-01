/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 4, 2022, 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap3_Prob20_Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    float sine,cosine,tangent,input2;    
    int input1;
    //Initialize or input i.e. set variable values
    cin>>input1;
    //Map inputs -> outputs
    
    input2=input1/180.0*3.141592653589793238463;
    
    sine=sin(input2);
    cosine=cos(input2);
    tangent=tan(input2);
    
  
    
    //Display the outputs
    
cout<<fixed<<setprecision(4);
cout<<"Calculate trig functions"<<endl;
cout<<"Input the angle in degrees."<<endl;
cout<<"sin("<<input1<<") = "<<sine<<endl;
cout<<"cos("<<input1<<") = "<<cosine<<endl;
cout<<"tan("<<input1<<") = "<<tangent;
    //Exit stage right or left!
    return 0;
}