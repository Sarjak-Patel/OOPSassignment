//with class and object.

#include<iostream>
using namespace std;
class school
{
	public:
		
	int a,b,sum,sub; //data member
	void student() // member function or method
	{
		cout<<"enter the number";
		cin>>a>>b;
		sum=a+b;
		cout<<"the sum is:"<<sum<<endl;	
	}	
	void student1() //member function or method
	{
		cout<<"enter the number";
		/*this is scanf as cin in c++*/
		cin>>a>>b;
		sub=a-b;
		cout<<"the sum is:"<<sub<<endl;
	}
};
int main()
{
	//class_name object
	school s1;
	s1.student();
	s1.student1();
}
