#include<iostream>
using namespace std;
int main() 
{
	int a;
	cout<<"Enter the number: \n";
	cin>> a;
	if(a%2 == 0){
		cout<< " The number " << a << " is even"<< endl;
	}else if(a<0){
		cout<< "the number " << a << " is negative" << endl;
	} else {
		cout<< "the number " << a << " is odd" << endl;
	}
	return 0;
}