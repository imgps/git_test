/* begin(), end(), rbegin(), rend() */

#include<iostream>
#include<string>
using namespace std; 

int main() {

    string str = "GURUPRASADSHARMA"; //Initializing string

    std::string::iterator it; //Declaring iterators
    std::string::reverse_iterator it1; //Declating reverse iterators

    //Displaying string
    cout<<"The string using forward iterator is: ";
    for(it = str.begin(); it !=str.end(); it++)
        cout<< *it;
    cout<<endl;

    //Displaying reverse string

    cout<<"The string using forward iterator is: ";
    for(it1 = str.rbegin(); it1 !=str.rend(); it1++)
        cout<< *it1;
    cout<<endl;

    return 0;
}