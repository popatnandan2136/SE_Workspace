#include <iostream>
using namespace std;
class A{
    public:
        int a=10;
};

class B{
    public:
        int b=20;
};

class C{
    public:
        int c=30;
};

class D : public A,public B,public C{
    public:
    int d;
    void calculate(){
         d = a+b+c;
         cout<<"Value Of d is:"<<d<<endl;
    }
};

int main(){
    D doutput;
    doutput.calculate();
    return 0;
}
