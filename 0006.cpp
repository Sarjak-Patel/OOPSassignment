#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            cout << "Length cannot be negative." << endl;
        }
    }
    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            cout << "Width cannot be negative." << endl;
        }
    }
    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
    double getArea() const {
        return length * width;
    }
    double getPerimeter() const {
        return 2 * (length + width);
    }
    void display() const {
        cout << "Rectangle with length: " << length << " and width: " << width << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle myRectangle(5.0, 3.0);
    myRectangle.display();
    myRectangle.setLength(7.0);
    myRectangle.setWidth(4.0);
    cout << "\nUpdated details:" << endl;
    myRectangle.display();
}

