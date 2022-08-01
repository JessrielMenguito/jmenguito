/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on June 29, 2022, 7:13 PM
 * Purpose: Calculate stock Costs
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
    //Initialize the RAndom Number Seed
    
    //Declare Variables
    
    //Initialize Variables
    
    //Map inputs to outputs -> The Process
    
    //Display Results
#include<iostream>
    using namespace std;
    {
        int price, share, perc, paid, comm, tot;
        share = 750;
        price = 35;
        perc = 2;
                
        cout << "Kathryn bought "; cout << share; cout << " shares of stock at a price of"; cout << price; cout << ".00 per share.\n";
        cout << "She must pay her stockbroker a "; cout << perc; cout << " percent commission for the transaction.\n";
        cout << "\n";
                
//Write a program that calculates and displays the following:

//The amount paid for the stock alone (without the commission).
        paid = share * price;
        cout << "The amount paid for the stock alone (without the commission) is $"; cout << paid; cout << ".00 dollars.\n";
                    
//The amount of the commission.
        comm = perc * paid / 100;
        cout << "The amount owed in commission is $"; cout << comm;
        cout << ".00 dollars.\n";
        
//The total amount paid (for the stock plus the commission).
        tot = comm + paid;
        cout << "The total amount paid is "; cout << tot;
        cout << ".00 dollars.\n";
        

        
        
    }
    //Exit stage right    
    return 0;
}

