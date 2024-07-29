#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void initializePerson(const string& n, int a) {
        name = n;
        age = a;
    }
    void readPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    float percentage;
public:
    void initializeStudent(const string& n, int a, float p) {
        initializePerson(n, a);
        percentage = p;
    }
    void readStudent() const {
        readPerson(); 
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
class Teacher : public Person {
protected:
    float salary;

public:
    void initializeTeacher(const string& n, int a, float s) {
        initializePerson(n, a);
        salary = s;
    }
    void readTeacher() const {
        readPerson();
        cout << "Salary: $" << salary << endl;
    }
};
class TeachingAssistant : public Student, public Teacher {
public:
    void initializeTeachingAssistant(const string& n, int a, float p, float s) {
        Student::initializeStudent(n, a, p);
        Teacher::initializeTeacher(n, a, s);
    }
    void readTeachingAssistant() const {
        Student::readStudent();
        Teacher::readTeacher();
    }
};

int main() {
    TeachingAssistant ta;
    ta.initializeTeachingAssistant("Alice", 22, 85.5, 50000.0);
    cout << "Teaching Assistant Details:" << endl;
    ta.readTeachingAssistant();
}

