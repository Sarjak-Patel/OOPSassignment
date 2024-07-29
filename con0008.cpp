#include <iostream>
#include <string>
using namespace std;
class Address {
private:
    string street;
    string city;
    string state;
    string zipCode;
public:
    Address(const string& st, const string& c, const string& s, const string& z)
        : street(st), city(c), state(s), zipCode(z) {}
    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << zipCode << endl;
    }
};
class Student {
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    Address address;

public:
    Student(const string& n, const string& c, int r, float m, const Address& addr)
        : name(n), className(c), rollNumber(r), marks(m), address(addr) {}
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 80) return 'B';
        else if (marks >= 70) return 'C';
        else if (marks >= 60) return 'D';
        else return 'F';
    }
    void displayStudentInfo() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
        address.displayAddress();
    }
};

int main() {
    Address studentAddress("123 Main St", "Springfield", "IL", "62704");
    Student student("John Doe", "10th Grade", 12345, 85.5, studentAddress);
    student.displayStudentInfo();
}

