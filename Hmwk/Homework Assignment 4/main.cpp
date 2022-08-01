/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 5th, 2022, 11:25 AM
 * Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>  //Input/output Library
#include <iomanip>   //Format Library
#include <cstdlib>   //Random Number
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only
const unsigned char CNVDLRS=100;//
const float GALLONS=0.264179;
int PERCENT=100;

//Function Prototypes
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();
void prblm7();
void prblm8();
void prblm9();
void prblm10();
void Run1(float,float,float);
void Run2(float,float);

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
        //Initialize Variables
        cout<<"Which Problem would you like to run"<<endl;
        cout<<"Type 0 for Problem 1 Sum"<<endl;
        cout<<"Type 1 for Problem 2 Pay In Pennies"<<endl;
        cout<<"Type 2 for Problem 3 Min Max"<<endl;
        cout<<"Type 3 for Problem 4 Rectangle"<<endl;
        cout<<"Type 4 for Problem 5 Pattern"<<endl;
        cout<<"Type 5 for Problem 6 MPG"<<endl;
        cout<<"Type 6 for Problem 7 Fuel Efficiency"<<endl;
        cout<<"Type 7 for Problem 8 Inflation"<<endl;
        cout<<"Type 8 for Problem 9 Estimated Cost"<<endl;
        cout<<"Type 9 for Problem 10 2 or 3 Max"<<endl;
        cin>>choice;

        //Map the Inputs to the Outputs
        switch(choice){
            case '0':prblm1();break;
            case '1':prblm2();break;
            case '2':prblm3();break;
            case '3':prblm4();break;
            case '4':prblm5();break;
            case '5':prblm6();break;
            case '6':prblm7();break;
            case '7':prblm8();break;
            case '8':prblm9();break;
            case '9':prblm10();break;
        }
    }while(choice>='0'&&choice<'10');

    //Exit the code
    return 0;
}

void prblm1(){
    //Declare Variables
    int number;
    int start=1;
    int out=0;
    //Initialize or input i.e. set variable values
    cin>>number;
    //Map inputs -> outputs
    for(int start=1;start<=number;start++)
    out+=start;
    //cout<<"number="<<number<<endl;
    //cout<<"start="<<start<<endl;
    //cout<<"out="<<out<<endl;
    
    cout<<"Sum = "<<out;
}

void prblm2(){
    //Declare Variables
    double payDay,//Pay that is doubled each payDay
        totSum;//Total sum of all paydays
    int nDays;//Number of days to double paydays
    
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
}
}

void prblm3(){
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
}

void prblm4(){
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
}

void prblm5(){
     //Declare Variables
    int uInp,count,countDn=0,countUp,test,num;
    
    cin>>uInp;
    
    //Initialize or input i.e. set variable values
    
    
    for(count=0;count<=uInp;count++){
        //cout<<"countDn="<<countDn<<endl;
        //cout<<"uInp="<<uInp<<endl;
        //test=uInp-countDn;
        //uInp=test;
        //cout<<"test="<<test<<endl;
        countDn++;
            {for(count=0;count<countDn;count++)
                cout<<"+";        
            }
        cout<<endl<<endl;
        }
       


    countDn=0;
    //test=0;
   
    for(count=2;count<=uInp;count++){

        //test=uInp-countDn;
        
        test=uInp-countDn;
        
        //cout<<"countDn="<<countDn<<endl;
        //cout<<"uInp="<<uInp<<endl;
        
        countDn++;
        
        //cout<<"test="<<test<<endl;
        
            {for(num=1;num<=test;num++)
                cout<<"+";        
            }
        
        
        cout<<endl<<endl;
        }
        
    cout<<"+";
   
}
void prblm6(){
    //Execution Begins Here!
    float liters,miles,mpg,gal;
    int count;
    char quit;
    //Declare Variables
    quit='y';
    
    //Initialize or input i.e. set variable values
    while (quit=='y')
    {
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;        
        cin>>liters;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>miles;
        cout<<"miles per gallon:"<<endl;
        gal=liters*GALLONS;
        mpg=miles/gal;
        cout<<fixed<<setprecision(2)<<mpg<<endl;//15.14↵
        cout<<"Again:"<<endl;
        cin>>quit;
        if (quit=='y')
        cout<<endl;
        
        //cout<<"quit="<<quit;
        
    }
}
void prblm7(){
    //Set the random number seed
    float liters1,miles1,liters2,miles2,mpg1,mpg2,gal1,gal2,effCar;
    int count;
    char quit;
    //Declare Variables
    quit='y';
    
    //Initialize or input i.e. set variable values
    while (quit=='y')
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters1;
        cout<<"Enter number of miles traveled:"<<endl;  
        cin>>miles1;
        cout<<"miles per gallon: ";
        gal1=liters1*GALLONS;
        mpg1=miles1/gal1;
        cout<<fixed<<setprecision(2)<<mpg1<<endl<<endl;//15.14↵
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liters2;
        cout<<"Enter number of miles traveled:"<<endl;  
        cin>>miles2;
        cout<<"miles per gallon: ";
        gal2=liters2*GALLONS;
        mpg2=miles2/gal2;
        cout<<fixed<<setprecision(2)<<mpg2<<endl<<endl;//15.14↵
        
        if (mpg1>mpg2)
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
            
        else
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        
        
        cout<<"Again:"<<endl;
        cin>>quit;
        if (quit=='y')
        cout<<endl;
        
        //cout<<"quit="<<quit;
        
    }
}
void prblm8(){
    //Set the random number seed
    
    //Declare Variables
    char yn;
    float price,price2,infl;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    yn='y';
    
    //Display the outputs
    while (yn=='y')
    {
        cout<<"Enter current price:"<<endl;
        cin>>price;
        cout<<"Enter year-ago price:"<<endl;
        cin>>price2;
        infl=((price-price2)/price2)*PERCENT;
        cout<<fixed<<setprecision(2)<<"Inflation rate: "<<infl<<"%"<<endl<<endl;
        
        cout<<"Again:"<<endl;
        cin>>yn;
        if (yn=='y')
        cout<<endl;
    }
}
void prblm9(){
    //Set the random number seed
    
    //Declare Variables
    char yn;
    float price,price2,infl,price1yr,price2yr;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    yn='y';
    
    //Display the outputs
    while (yn=='y')
    {
        cout<<"Enter current price:"<<endl;
        cin>>price;
        cout<<"Enter year-ago price:"<<endl;
        cin>>price2;
        infl=((price-price2)/price2)*PERCENT;
        cout<<fixed<<setprecision(2)<<"Inflation rate: "<<infl<<"%"<<endl<<endl;
        
        price1yr=price*((infl/100)+1);
        cout<<"Price in one year: $"<<price1yr<<endl;//10.66↵
        
        price2yr=price*((infl/100)+1)*((infl/100)+1);
        cout<<"Price in two year: $"<<price2yr<<endl<<endl;//14.22↵
        
        cout<<"Again:"<<endl;
        cin>>yn;
        if (yn=='y')
        cout<<endl;
    }
}
void prblm10(){
    //Set the random number seed
    
    //Declare Variables
    float num1,num2,num3;
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Enter first number:"<<endl<<endl;
    cin>>num1;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>num2;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>num3;
    
    Run2(num1,num2);
    Run1(num1,num2,num3);
}
void Run1(float num1,float num2,float num3)
{
    float lrgNum3;
    if (num1>num2&&num1>num3)
        lrgNum3=num1;
    if (num2>num1&&num2>num3)
        lrgNum3=num2;  
    if (num3>num1&&num3>num2)
        lrgNum3=num3;
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<lrgNum3<<endl;//3.1↵"
        
}
    void Run2(float num1, float num2)
{
    float lrgNum2;
    if (num1>num2)
        lrgNum2=num1;
    if (num2>num1)
        lrgNum2=num2;  
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<lrgNum2<<endl<<endl;
}