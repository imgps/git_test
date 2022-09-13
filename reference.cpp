/*This is a program for topic- REFERENCE in CPP*/

#include<iostream>
using  namespace std;
int main() {

	string food = "Pizza"; //Food variable
	string &meal = food; //reference to food
	
	cout<<food<<"\n";
	cout<<meal<<"\n";
	cout<<&food<<"\n";
	cout<<&meal<<"\n";
	return 0;
}
