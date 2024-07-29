#include <iostream>
#include <cmath>
using namespace std;
class Circle {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    void setRadius(double r) {
        if (r >= 0) {
            radius = r;
        } else {
            cout << "Radius cannot be negative." << endl;
        }
    }
    double getRadius() const {
        return radius;
    }
    double getArea() const {
        return M_PI * radius * radius;
    }
    double getCircumference() const {
        return 2 * M_PI * radius;
    }
    void display() const {
        cout << "Circle with radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Circumference: " << getCircumference() << endl;
    }
};

int main() {
    Circle myCircle(5.0);
    myCircle.display();
    myCircle.setRadius(10.0);
    cout << "\nUpdated details:" << endl;
    myCircle.display();
}

