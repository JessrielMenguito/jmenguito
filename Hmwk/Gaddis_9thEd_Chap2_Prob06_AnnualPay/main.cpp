/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on June 29, 2022, 7:28 PM
 * Purpose: Calculate Annual Income
 * 
 */

#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int payamt, payper, payann;
    
    
    //Initialize Variables
    payamt = 2200;
    payper = 26;
   
    //Map inputs to outputs -> The Process
    payann = payamt * payper;
    
    //Display Results
    
    {    
        cout << "The employee has earned ";
        cout << payamt;
        cout << ".00 dollars over ";
        cout << payper;
        cout << " weeks. Annually, the employee will earn ";
        cout << payann;
        cout << " in gross pay.";

    
    }
    //Exit stage right    
    return 0;
}

//Annual Pay

//Suppose an employee gets paid every two weeks and earns $2,200 each pay period. In a year, the employee gets paid 26 times. Write a program that defines the following variables:

//payAmount	This variable will hold the amount of pay the employee earns each pay period. Initialize the variable with 2200.0.
//payPeriods	This variable will hold the number of pay periods in a year. Initialize the variable with 26.
//annualPay	This variable will hold the employee’s total annual pay, which will be calculated.
//The program should calculate the employee’s total annual pay by multiplying the employee’s pay amount by the number of pay periods in a year and store the result in the annualPay variable. Display the total annual pay on the screen.