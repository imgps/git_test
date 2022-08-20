#include<iostream>
#include<string>
using namespace std;
int main() {

	cout<<"Guru here, how are you??" <<endl;

	cout<<"Enter your name: "<< endl;
	//user input 
	string str_name;
	getline (cin,str_name);
	cout<< "Name: "<<str_name<<endl;
	return 0;
}