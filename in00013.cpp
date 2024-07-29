#include <iostream>
#include <cmath>
using namespace std;
double area(double length, double breadth) {
    return length * breadth;
}
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}
double area(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double length, breadth, base, height, radius;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle: " << area(length, breadth) << endl;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle: " << area(base, height, true) << endl;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of Circle: " << area(radius) << endl;
}

