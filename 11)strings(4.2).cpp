/*Write a program to concatenate the two 
strings using Operator Overloading*/

#include <iostream>
#include <string.h>
using namespace std;
class AddString {
 
public:
   
    char s1[25], s2[25];
    // Parameterized Constructor
    AddString(char str1[], char str2[])
    {
        // Initialize the string to class object
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
 
    // Overload Operator+ to concat the string
    void operator+()
    {
        cout << "\nConcatenation: " << strcat(s1, s2);
    }
};
 

int main()
{
    
    char str1[] = "Rushi";
    char str2[] = "Padaria";
    AddString a1(str1, str2);
    +a1;
   
}
