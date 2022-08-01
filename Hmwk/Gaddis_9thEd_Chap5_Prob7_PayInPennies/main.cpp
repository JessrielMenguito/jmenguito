    /* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on July 11, 2022 12:36 PM
 * Purpose:  Gaddis_9thEd_Chap5_Prob7_PayInPennies
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const unsigned char CNVDLRS=100;//
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    double payDay,//Pay that is doubled each payDay
        totSum;//Total sum of all paydays
    int nDays;//Number of days to double paydays
    
    
    //Initialize or input i.e. set variable values
    cin>>nDays;
    payDay=0.01;
    totSum=0;
    if (nDays<1)
    cout<<"Invalid entry. Number of days cannot be less than one.";
    //else if (nDays<1)
    //    cout<<"Pay = $"<<payDay;
    else
        {
    //Map inputs -> outputs
    //totSum=0.01;
    for(int day=1;day<=nDays;day++){
        totSum+=payDay;
        payDay*=2;
        
        //cout<<"payDay = "<<payDay<<endl;
        //cout<<"totSum = "<<totSum<<endl;
    
    }
    
    //cout<<"1 payDay = "<<payDay<<endl;
    //cout<<"totSum = "<<totSum<<endl;
    //Display the outputs
    
;
    //cout<<"Pennies = "<<totSum<<endl;
    
    cout<<fixed<<setprecision(2)<<"Pay = $"<<totSum;
    
    /*
    if(pennies<10)
        cout<<'0'<<pennies<<endl;
        else
        cout<<pennies<<endl;
    //cout<<(pennies<10?'0':'\0')<<pennies<<endl;
    */
        }
    //Exit stage right or left!
    return 0;
}