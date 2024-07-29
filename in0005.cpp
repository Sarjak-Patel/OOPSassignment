#include <iostream>
using namespace std;
class Student {
protected:
    int rollNumber;
public:
    Student(int rollNo) : rollNumber(rollNo) {}
    void setRollNumber(int rollNo) {
        rollNumber = rollNo;
    }
    int getRollNumber() const {
        return rollNumber;
    }
};
class Test : public Student {
protected:
    float marks1;
    float marks2;

public:
    Test(int rollNo, float m1, float m2) : Student(rollNo), marks1(m1), marks2(m2) {}
    void setMarks(float m1, float m2) {
        marks1 = m1;
        marks2 = m2;
    }
    float getMarks1() const {
        return marks1;
    }
    float getMarks2() const {
        return marks2;
    }
};
class Result : public Test {
public:
    Result(int rollNo, float m1, float m2) : Test(rollNo, m1, m2) {}
    float getTotalMarks() const {
        return marks1 + marks2;
    }
    void displayResult() const {
        cout << "Roll Number: " << getRollNumber() << endl;
        cout << "Marks in Subject 1: " << getMarks1() << endl;
        cout << "Marks in Subject 2: " << getMarks2() << endl;
        cout << "Total Marks: " << getTotalMarks() << endl;
    }
};

int main() {
    Result studentResult(101, 75.5, 88.0);
    studentResult.displayResult();
}

