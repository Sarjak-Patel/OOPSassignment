/* Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/

#include <iostream>
#include <string>
using namespace std;
class Person {
  private:  string name;
  int age;
  string country;

  public:
    // Setter functions
    void setName(const std::string & n) 
	{
      name = n;
    }

  void setAge(int a)
   {
    age = a;
  }

  void setCountry(const std::string & c)
   {
    country = c;
  }

  // Getter functions
  string getName() 
  {
    return name;
  }

  int getAge() 
  {
    return age;
  }

  string getCountry()
   {
    return country;
  }
};

int main() 
{
  // Create a person object
  Person person;

  // Set the person's details
  person.setName("Rushi Padaria");
  person.setAge(22);
  person.setCountry("India");
  person.setCountry("India");

  // Get and display the person's details
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
  cout << "Country: " << person.getCountry() << endl;

  
}
