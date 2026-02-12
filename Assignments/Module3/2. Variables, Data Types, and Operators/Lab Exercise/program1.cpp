#include <iostream>
using namespace std;

int main()
{
    int age=20;
    float height=5.8;
    double salary=45000.75;
    char grade='A';
    bool isStudent=true;

    const float PI=3.14159;

    cout<<"Age = "<<age<<endl;
    cout<<"Height = "<<height<<endl;
    cout<<"Salary = "<<salary<<endl;
    cout<<"Grade = "<<grade<<endl;
    cout<<"Is Student = "<<isStudent<<endl;
    cout<<"PI = "<<PI<<endl;

    int nextAge=age+1;
    double yearlySalary=salary*12;
    float circleArea=PI*5*5;

    cout<<"\nAfter Operations:"<<endl;
    cout<<"Next Age = "<< nextAge<<endl;
    cout<<"Yearly Salary = "<<yearlySalary<<endl;
    cout<<"Area of Circle = "<<circleArea<<endl;

    return 0;
}
