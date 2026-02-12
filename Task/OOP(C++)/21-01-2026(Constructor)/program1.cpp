#include<iostream>
using namespace std;
class Student
{
    //global
    public:
    int id=0;
    string name="";
    
    //this keyword it will be use for refrence passing
    Student(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    
    // void input(){
    //     cout<<"Enter ID:"<<endl;
    //     cin>>id;
    //     cout<<"Enter Name:"<<endl;
    //     cin>>name;
    // }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }

};

int main()
{
    int id;
    string name;
    cout<<"Enter ID:"<<endl;
    cin>>id;
    cout<<"Enter Name:"<<endl;
    cin>>name;
    
    int id1;
    string name2;
    cout<<"Enter ID:"<<endl;
    cin>>id1;
    cout<<"Enter Name:"<<endl;
    cin>>name2;
    Student s1 = Student(id,name);
    Student s2 = Student(id1,name2);
    
    // s1.input();
    // s2.input();
    
    s1.display();
    s2.display();
   
    
    return 0;
}