/* Creating string class using
capacity() resize() and shrink_to_fit() class */

#include<iostream>
#include <string>
using namespace std;
int main() {

    string str = "Guru Prasad Sarmah"; //Initializing string

    //Display string
    cout<< "The initial string is: ";
    cout<< str<< endl;

    str.resize(11);    //Resizing string
    cout<<"The string after resize operation is: ";
    cout<<str<<endl;

    cout<<"The capacity of the string is: ";
    cout<<str.capacity()<<endl;

    cout<<"The length of the string is: ";
    cout<<str.length()<<endl;

    str.shrink_to_fit();

    cout<<"the new capacity after shrinking is: ";
    cout<<str.capacity()<<endl;
    return 0;
}