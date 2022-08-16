//Calaulating simple interest

#include<iostream>
using namespace std; 
int main(){

    int p, t;
    float r, si;
    cout<<"Enter the Principle amount: "<< endl;
    cin>> p;
    cout<<"Enter the rate of interest: "<< endl;
    cin>> r;
    cout<<"Enter the number of years: " << endl;
    cin>> t;
    si = (p*r*t)/100;
    cout<< "The interest amount is: " << si << endl;
return 0;
}