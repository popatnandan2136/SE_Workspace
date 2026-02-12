#include <iostream>
using namespace std;
class Shape{
    public:
    double a,b;
    void shape(int a1,int b1)
    {
        a = a1;
        b =b1;
    }
   
};
class Rectangle : public Shape{
    public:
    double areaOfRactangle;
    void AreaOfRactangle(){
        areaOfRactangle = a*b;
        cout<<"Area Of Ractangle Is: "<<areaOfRactangle<<endl;
    }
};
class Triangle : public Shape{
    public:
    double areaOfTriangel;
    void AreaOfTriangle(){
        areaOfTriangel = a*b;
        cout<<"Area Of Triangle Is: "<<areaOfTriangel<<endl;
    }
};
class Circle : public Shape{
    public:
    double areaOfCircle;
    void AreaOfCircle(){
        areaOfCircle = 3.14*a*a;
        cout<<"Area Of Triangle Is: "<<areaOfCircle<<endl;

    }
};

int main(){

    double a, b;

    cout<<"Enter Value Of a:"<<endl;
    cin>>a;
    cout<<"Enter Value Of b:"<<endl;
    cin>>b;
    Rectangle r;
    Triangle t;
    Circle c;
    r.AreaOfRactangle();
    t.AreaOfTriangle();
    c.AreaOfCircle();

    return 0;
}





// #include <iostream>
// using namespace std;

// class Shape {
// public:
//     double a=10;
//     double b=20;
// };

// class Rectangle : public Shape {
// public:
//     void AreaOfRectangle() {
//         cout << "Area Of Rectangle Is: " << a * b << endl;
//     }
// };

// class Triangle : public Shape {
// public:
//     void AreaOfTriangle() {
//         cout << "Area Of Triangle Is: " << 0.5 * a * b << endl;
//     }
// };

// class Circle : public Shape {
// public:
//     void AreaOfCircle() {
//         cout << "Area Of Circle Is: " << 3.14 * a * a << endl;
//     }
// };

// int main() {
//     Rectangle r;
//     Triangle t;
//     Circle c;

//     r.AreaOfRectangle();
//     t.AreaOfTriangle();
//     c.AreaOfCircle();

//     return 0;
// }
