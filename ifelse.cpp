//Take two int values from user and print greatest among them.
//Also finding if both are same



#include<iostream>
using namespace std;
int main() {

    int a,b;
    cout<<"Enter the 1st number: \n";
    cin>> a;
    cout<<"Enter the 2nd number \n";
    cin>> b;
    if(a>b)
        cout<<"1st number is greatest \n";
    if (a<b)     
    cout<<"2nd number is greatest \n";
    if (a==b)     
    cout<<"Both the numbers are same \n";
    return 0;
}