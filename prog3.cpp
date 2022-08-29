//For loop practice//

#include<iostream>
using namespace std;
int main() {

	string student[5] = {"Name", "Class", "Rollno", "Contact", "IDs"};
	for (int i =0; i<5; i++)
		cout << student[i] << endl;
	cout<< sizeof(student) << endl;
	int getArrayLength= sizeof(student)/sizeof(string);
	cout<< getArrayLength;	
	return 0;
}
