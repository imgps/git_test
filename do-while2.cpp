// program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include<iostream>
using namespace std;
int main() {
    
    int num=0;
    int sum=0;
    do
    {
        sum += num;
        cout << "Enter the number: " << endl;
        cin >> num;
    } 
    while (num>=0);
    cout << "the number is: " << sum << endl;

    return 0;
}