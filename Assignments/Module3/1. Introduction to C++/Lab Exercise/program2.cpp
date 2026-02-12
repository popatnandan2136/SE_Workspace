// Write a C++ program that accepts user input for their name and age and then
// displays a personalized greeting.
#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"Enter Your Name:"<<endl;
    cin>>name;
    cout<<"Enter Your Age:"<<endl;
    cin>>age;

    cout<<"Hello "<<name<<endl;
}