#include<iostream>
#include<string.h>
using namespace std;
class person{
	public:
	char name[6];
	int age,i;
	void details()
	{
		cout<<"Enter Person Name:"<<endl;
		for(i=1;i<=6;i++)
		{
			cin>>name[i];
		}
		cout<<"Enter Person Age:"<<endl;
		cin>>age;
		cout<<"The Name:"<<name[i]<<endl;
		cout<<"The Age:"<<age<<endl;		
	}
};
class student{
	public:
	int per;
	void percentage()
	{
		cout<<"Enter Person Percentage:"<<endl;
		cin>>per;
		cout<<"The Percentage:"<<per<<endl;
	}
};
class teacher:public person,public student{
	public:
	float s;
	void salary()
	{
		cout<<"Enter Person Salary:"<<endl;
		cin>>s;
		cout<<"The Salary:"<<s<<endl;
	}
};
int main()
{
	teacher t1;
	t1.details();
	t1.percentage();
	t1.salary();	
}
