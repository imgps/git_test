/*Program edited in vim 
 * for creating a product */

#include <iostream>
using namespace std;
int main() {
    int x, y, z, sum;
    cout<<"Enter the first number: \n";
    cin>> x;
    cout<<"Enter the second number: \n";
    cin>> y;
    cout<<"Enter the third number: \n";
    cin>> z;
    sum = x*y*z;
    cout<<"The product of three number is: \n" << sum ;
    return 0;
}