/* Learning structures in cpp 
What is the this thing
that is the that thing
what is the other thing
its not everything*/

#include<iostream>
using namespace std;
struct Person
{
    string name;
    int age;
    float salary;
};
    int main()

 {  Person p1;
    cout<<"Enter full name:";
    getline(cin, p1.name); 
    // cin.get(p1.name);
    cout<<"Enter age: ";
    cin>>p1.age;
    cout<<"Enter salary: ";
    cin>>p1.salary;

    cout<<"\n  ************Displaying information********** "<<endl;
    cout<<"Name: "<< p1.name <<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Salary: "<<p1.salary<<endl;

    return 0;
 }