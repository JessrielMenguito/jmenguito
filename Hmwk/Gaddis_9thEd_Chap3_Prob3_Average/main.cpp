/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 4, 2022, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
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
    float a,b,c,d,e;
    float sum,avg;
    
    //Initialize or input i.e. set variable values
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    
    //Map inputs -> outputs
    sum=a+b+c+d+e;
    avg=sum/5.0;
    
    //Display the outputs
    //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<sum<<endl;
    
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<setprecision(1)<<fixed<<setw(1)<<avg;
    
    
    //Exit stage right or left!
    return 0;
}