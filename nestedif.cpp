//Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<iostream>
using namespace std;
int main() {

    int len, bre;
    cout<<"Enter Length: \n";
    cin>> len;
    cout<<"Enter Breath: \n";
    cin>> bre;
    if(len == bre) //Condition statement (Boolean condition)
    {
        cout<< "Its a Square \n";
    }
    else    //Condition statement (Boolean condition)
    {
        cout<<"ITs not a square \n";
    }
    return 0;
}