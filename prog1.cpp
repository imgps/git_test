/* Program to find odd or even between two numbers */

#include<iostream>
using namespace std;
int main() {

	int a;
	cout<<"Enter the number: \n";
	cin>>a;
	if(a<0)
	cout<<"The number " << a <<  " is negative" << endl;
	else if(a%2 ==0)
	cout<<"The number " << a << " is even" << endl;
	else
	cout<< "The number " << a<< " is odd" << endl;
	return 0;
}
