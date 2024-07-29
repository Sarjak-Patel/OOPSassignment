#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
double add(double a, double b, double c) {
    return a + b + c;
}
int subtract(int a, int b) {
    return a - b;
}
double subtract(double a, double b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a * b;
}
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main() {
    int int1 = 10, int2 = 5, int3 = 3;
    cout << "Addition of integers: " << add(int1, int2) << endl;
    cout << "Addition of three integers: " << add(int1, int2, int3) << endl;
    cout << "Subtraction of integers: " << subtract(int1, int2) << endl;
    cout << "Multiplication of integers: " << multiply(int1, int2) << endl;
    cout << "Division of integers: " << divide(int1, int2) << endl;
    double double1 = 10.5, double2 = 2.5, double3 = 1.5;
    cout << "Addition of doubles: " << add(double1, double2) << endl;
    cout << "Addition of three doubles: " << add(double1, double2, double3) << endl;
    cout << "Subtraction of doubles: " << subtract(double1, double2) << endl;
    cout << "Multiplication of doubles: " << multiply(double1, double2) << endl;
    cout << "Division of doubles: " << divide(double1, double2) << endl;

    return 0;
}

