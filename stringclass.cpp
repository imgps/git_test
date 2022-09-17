/* String and chararry class */

#include<iostream>
#include<string>
using namespace std;

int main() {

	string str; //Declaring string

	cout<<"Enter the string: ";
	getline(cin,str); //Taking String input using getline

	cout<< "The initial string is: "; //Displaying string
	cout<< str <<endl;

	str.push_back('s'); //Inserting a character

	cout<<"The string after push_back operation is: ";
	cout<<str<<endl;

	str.pop_back(); //Deleting a character

	cout<<"The string after pop_back operation is: ";
	cout<<str<<endl;
	return 0;
}