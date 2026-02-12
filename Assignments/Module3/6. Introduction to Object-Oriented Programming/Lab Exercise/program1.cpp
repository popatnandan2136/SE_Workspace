#include<iostream>
using namespace std;

class Calculator
{
public:
float add(float a,float b){return a+b;}
float subtract(float a,float b){return a-b;}
float multiply(float a,float b){return a*b;}
float divide(float a,float b){return a/b;}
};

int main()
{
Calculator calc;

cout<<"Addition:"<<calc.add(10,5)<<endl;
cout<<"Subtraction:"<<calc.subtract(10,5)<<endl;
cout<<"Multiplication:"<<calc.multiply(10,5)<<endl;
cout<<"Division:"<<calc.divide(10,5);

return 0;
}
