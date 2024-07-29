#include<iostream>
using namespace std;
int w,l;
int i,total;
class base{
	public:
	void show()
	{
		cout<<"Enter Width:"<<endl;
		cin>>w;
		cout<<"Enter Length:"<<endl;
		cin>>l;
	}
};
class derived:public base{
	public:
		void show1()
		{
		total=w*l;
		cout<<"Area of ractangle is:"<<total<<endl;
		}
};
int main()
{
	derived d1;
	d1.show();
	d1.show1();
	
}
