/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/

#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the Operator (+, -, *, /): ";
    cin>>op;
    if(op=='+')
        cout<<endl<<"Addition Result = "<<num1+num2;
    else if(op=='-')
        cout<<endl<<"Subtraction Result = "<<num1-num2;
    else if(op=='*')
        cout<<endl<<"Multiplication Result = "<<num1*num2;
    else if(op=='/')
        cout<<endl<<"Division Result = "<<num1/num2;
    else
        cout<<endl<<"Wrong Operator!";
    
}
