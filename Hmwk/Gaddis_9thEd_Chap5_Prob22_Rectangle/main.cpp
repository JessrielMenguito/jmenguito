/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 11, 2022 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob22_Rectangle
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
    char let;
    int num;
    //Declare Variables
    
    //Initialize or input i.e. set variable values
    cin>>num;
    cin>>let;
    //Map inputs -> outputs
    for(int count=1;count<num;count++){
            
            for (int count=1;count<=num;count++){
            cout<<let;
            }
        cout<<endl;
        }
    for (int count=1;count<=num;count++){
            cout<<let;
            }
        
        
    //cout<<endl<<endl<<"num="<<num<<endl;
    //cout<<"let="<<let<<endl;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}