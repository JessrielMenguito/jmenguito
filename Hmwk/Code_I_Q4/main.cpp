/* 
 * File:
 * Author:
 * Date:
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    float w;
    float x;
    float y;
    float z;
    
    //Initialize or input data here
    cin>>w;
    cin>>x;
    cin>>y;
    cin>>z;
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here

    cout<<"        "<<setprecision(0)<<fixed<<setw(1)<<w<<"       "<<fixed<<setprecision(1)<<fixed<<setw(1)<<w<<"      "<<fixed<<setprecision(2)<<setw(2)<<w<<endl;
    cout<<"        "<<setprecision(0)<<fixed<<setw(1)<<x<<"       "<<fixed<<setprecision(1)<<fixed<<setw(1)<<x<<"      "<<fixed<<setprecision(2)<<setw(2)<<x<<endl;
    cout<<"        "<<setprecision(0)<<fixed<<setw(1)<<y<<"       "<<fixed<<setprecision(1)<<fixed<<setw(1)<<y<<"      "<<fixed<<setprecision(2)<<setw(2)<<y<<endl;
    cout<<"        "<<setprecision(0)<<fixed<<setw(1)<<z<<"       "<<fixed<<setprecision(1)<<fixed<<setw(1)<<z<<"      "<<fixed<<setprecision(2)<<setw(2)<<z;
//········2·······2.0······2.00↵
//········3·······3.0······3.00↵
//········4·······4.0······4.00
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}