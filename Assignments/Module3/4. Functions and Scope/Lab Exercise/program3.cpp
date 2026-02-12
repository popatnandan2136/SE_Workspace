#include<iostream>
using namespace std;

int globalVar=100;

void display()
{
int localVar=50;
cout<<"Inside function:\n";
cout<<"LocalVariable="<<localVar<<endl;
cout<<"GlobalVariable="<<globalVar<<endl;
}

int main()
{
cout<<"Inside main:\n";
cout<<"GlobalVariable="<<globalVar<<endl;

display();

return 0;
}
