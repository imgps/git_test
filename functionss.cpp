#include <iostream>
using namespace std;
int main() {

	int num;
	cout<<"Enter the number: " << endl;
	cin>>num;

	int sum = 0;
	while(num != 0) 
	{
		int digit = num/10;
		num = num/10;
		sum += digit;
	}
	cout <<sum<<endl;
	return 0;
}
