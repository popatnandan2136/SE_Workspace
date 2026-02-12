#include<iostream>
using namespace std;

float add(float a,float b){return a+b;}
float subtract(float a,float b){return a-b;}
float multiply(float a,float b){return a*b;}
float divide(float a,float b){return a/b;}

int main()
{
float x,y;
int choice;

cout<<"Enter two numbers:";
cin>>x>>y;

cout<<"\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n";
cout<<"Enter your choice:";
cin>>choice;

switch(choice)
{
case 1:cout<<"Result="<<add(x,y);break;
case 2:cout<<"Result="<<subtract(x,y);break;
case 3:cout<<"Result="<<multiply(x,y);break;
case 4:cout<<"Result="<<divide(x,y);break;
default:cout<<"InvalidChoice";
}

return 0;
}
