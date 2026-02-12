#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    float getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    cout << "Enter length: ";
    cin >> rect.length;

    cout << "Enter width: ";
    cin >> rect.width;

    cout << "Area of Rectangle = " << rect.getArea();

    return 0;
}
