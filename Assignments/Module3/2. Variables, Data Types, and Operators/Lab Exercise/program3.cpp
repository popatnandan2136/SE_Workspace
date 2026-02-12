#include<iostream>
using namespace std;

int main()
{
int a=10,b=5;

cout<<"Arithmetic Operators:\n";
cout<<"a+b="<<(a+b)<<endl;
cout<<"a-b="<<(a-b)<<endl;
cout<<"a*b="<<(a*b)<<endl;
cout<<"a/b="<<(a/b)<<endl;
cout<<"a%b="<<(a%b)<<endl;

cout<<"\nRelational Operators:\n";
cout<<"a>b="<<(a>b)<<endl;
cout<<"a<b="<<(a<b)<<endl;
cout<<"a==b="<<(a==b)<<endl;
cout<<"a!=b="<<(a!=b)<<endl;
cout<<"a>=b="<<(a>=b)<<endl;
cout<<"a<=b="<<(a<=b)<<endl;

bool x=true,y=false;
cout<<"\nLogical Operators:\n";
cout<<"x&&y="<<(x&&y)<<endl;
cout<<"x||y="<<(x||y)<<endl;
cout<<"!x="<<(!x)<<endl;

int m=6,n=3;
cout<<"\nBitwise Operators:\n";
cout<<"m&n="<<(m&n)<<endl;
cout<<"m|n="<<(m|n)<<endl;
cout<<"m^n="<<(m^n)<<endl;
cout<<"m<<1="<<(m<<1)<<endl;
cout<<"m>>1="<<(m>>1)<<endl;

return 0;
}
