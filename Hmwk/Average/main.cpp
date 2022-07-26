#include<iostream>
using namespace std;

int main(){
double x = 0, input;
int howmany = 0;
int anotherNumber;


do 
{

cout<<"Enter a number: "<<endl;
cin>>input;
howmany++;
cout<<"Are you finished? 2 = finished. "<<endl;
cin>>anotherNumber;

}
while (anotherNumber!=2);



x += input/howmany;
cout << "The average is " << x << endl;

}  