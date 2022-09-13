#include<iostream>
using namespace std;
int main() {

    //Program for product of two numbers
    int a,b;
    float result;

    //Output to display
    cout<<"Enter the first number: \n";
    cin>>a; //input the 1st number

    //output to display
    cout<<"Enter the second number: \n";
    cin>>b; //input the 2nd number

    result = a*b;
    cout<<"The product of the two number is \n" << result;
    return 0;
}