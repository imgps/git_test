//Loops and conditions
#include<iostream>
using namespace std;

int main() {

    string str;
    do 
    {
        cout << "Enter Text: ";
        getline (cin,str);
        cout << "Your entered: " << str << '\n';
    }while (str != "goodbye");
}