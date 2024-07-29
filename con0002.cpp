#include <iostream>
using namespace std;
class Arithmetic {
private:
    double num1;
    double num2;
public:
    Arithmetic(double a, double b) : num1(a), num2(b) {}
    double add() const {
        return num1 + num2;
    }
    double subtract() const {
        return num1 - num2;
    }
    double multiply() const {
        return num1 * num2;
    }
    double divide() const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }
};

int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    Arithmetic arithmetic(a, b);
    cout << "Addition: " << arithmetic.add() << endl;
    cout << "Subtraction: " << arithmetic.subtract() << endl;
    cout << "Multiplication: " << arithmetic.multiply() << endl;
    cout << "Division: " << arithmetic.divide() << endl;
}

