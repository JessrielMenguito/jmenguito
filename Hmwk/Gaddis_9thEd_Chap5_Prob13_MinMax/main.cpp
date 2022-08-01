/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 11, 2022 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob13_MinMax
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
    int count,userIn,
        minNum=1000,
        maxNum=0;
    int numIn=6;
    float endloop=-99;
    
    
    //Initialize or input i.e. set variable values
    for(int count=1;count<=numIn;count++){
    
    //cout<<"count="<<count<<endl;
    
    cin>>userIn;
    //cout<<"userIn="<<userIn<<endl;
    
    if (userIn<=minNum&&userIn>endloop)
    minNum=userIn;
        //out<<"minNum="<<minNum<<endl;
        
    
    if (userIn>=maxNum)
    maxNum=userIn;
        //cout<<"maxNum="<<maxNum<<endl;
        
    
    
        //cout<<endl;
        //cout<<endl;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<minNum<<endl;
    cout<<"Largest  number in the series is "<<maxNum;
    //Exit stage right or left!
    return 0;
}