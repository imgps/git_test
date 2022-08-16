// using switch in cpp sample program

#include<iostream>
using namespace std;
int main() {

    int num;  
    std::cout<<"Enter a number to check grade:";    
    cin>>num;  

    switch (num)    //expression
    {    
        case 10: 
        cout<<"It is 10"; 
        break;    //value and output

        case 20: 
        cout<<"It is 20"; 
        break;    

        case 30: 
        cout<<"It is 30"; 
        break;    

        default: 
        cout<<"Not 10, 20 or 30"; //code to be executed if all cases are not matched;  
        break;         
    }    
}