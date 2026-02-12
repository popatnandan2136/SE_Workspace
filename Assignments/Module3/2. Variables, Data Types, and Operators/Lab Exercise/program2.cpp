#include <iostream>
using namespace std;

int main()
{
    int a=10;
    double b=a;

    cout<<"Implicit Conversion:"<<endl;
    cout<<"Integer a = "<<a<<endl;
    cout<<"Converted to double b = "<< b<<endl;

    double x=9.8;
    int y=(int)x;

    cout<<"\nExplicit Conversion:"<<endl;
    cout<<"Double x = " << x<<endl;
    cout<<"Converted to int y = "<<y<<endl;

    int num1=5, num2=2;
    double result=(double)num1/num2;

    cout<<"\nDivision with type casting:"<<endl;
    cout<<"5 / 2 = "<<result <<endl;

    return 0;
}
