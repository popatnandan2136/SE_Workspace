#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;

    void getData()
    {
        cout<<"Enter name and age:";
        cin>>name>>age;
    }
};

class Student:public Person
{
    public:
    int rollNo;
    void getStudentData()
    {
        cout<<"Enter roll number:";
        cin>>rollNo;
    }
};

class Teacher:public Person
{
    public:
    string subject;
    void getTeacherData()
    {
        cout<<"Enter subject:";
        cin>>subject;
    }
};

int main()
{
        Student s;
        Teacher t;

        cout<<"Enter Student Details:\n";
        s.getData();
        s.getStudentData();

        cout<<"\nEnter Teacher Details:\n";
        t.getData();
        t.getTeacherData();

    return 0;
}
