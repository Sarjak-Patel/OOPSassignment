/*Assume that the test results of a batch of students are stored in three different 
classes. Class 	Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
#include <iostream>
#include <string>
using namespace std;
class Student {
  private: string name;
 string studentClass;
  int rollNumber;
  double marks;

  public:
    // Constructor
    Student(const string & studentName,
      const string & sClass, int rollNum, double studentMarks): name(studentName),
  studentClass(sClass),
  rollNumber(rollNum),
  marks(studentMarks) {}

  
 string calculateGrade() 
  {
    if (marks >= 90) 
	{
      return "A+";
    } 
	else if (marks >= 80) 
	{
      return "A";
    } 
	else if (marks >= 70)
	 {
      return "B";
    } 
	else if (marks >= 60) 
	{
      return "C";
    }
	 else 
	 {
      return "D";
    }
  }

  // Member function to display student information
  void displayInformation() 
  {
   cout << "\n\nName: " << name <<endl;
    cout << "Class: " << studentClass << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << calculateGrade() << endl;
  }
};

int main() 
{
  
  string studentName;
  string sClass;
  int rollNum;
  double studentMarks;
  cout << "Student details: ";
  cout << "\nName: ";
  getline(cin, studentName);

 cout << "Class: ";
  getline(std::cin, sClass);

  cout << "Roll number: ";
  cin >> rollNum;

  cout << "Marks (0-100): ";
  cin >> studentMarks;

  Student student(studentName, sClass, rollNum, studentMarks);
  student.displayInformation();

  
}
