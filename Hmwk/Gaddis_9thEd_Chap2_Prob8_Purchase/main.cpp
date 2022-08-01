/* 
 * File:   main.cpp
 * Author: Jessriel Menguito
 * Created on June 29, 2022, 7:28 PM
 * Purpose: Calculate Total Purchase
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
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    float subtot, tax, tot, taxp;
    
    
    //Initialize Variables
    tax = 0.07;
    
    
    //Map inputs to outputs -> The Process
   
    
    //Display Results
    
    
//Write a program that holds the prices of the five items in five variables.
//Display each item’s price, 
    
    {    
        
    cout << "A customer in a store is purchasing five items. The prices of the five items are as follows:\n\n";
    cout << "Price of item 1 = $";
    cout << item1;
    cout << "\nPrice of item 2 = $";
    cout << item2;
    cout << "\nPrice of item 3 = $";
    cout << item3;
    cout << "\nPrice of item 4 = $";
    cout << item4;
    cout << "\nPrice of item 5 = $";
    cout << item5;    

//the subtotal of the sale, 
    cout << "\n\nSubtotal:       = $";
    subtot = item1+item2+item3+item4+item5;
    cout << subtot;    
            
//the amount of sales tax,  Assume the sales tax is 7 percent.
    cout << "\nTax:            = $ ";
    taxp = tax * subtot;
    cout << taxp;
    
//and the total.
    cout << "\nTotal:          = $";
    tot = subtot + taxp;
    cout << tot;
    
    }
    //Exit stage right    
    return 0;
}

