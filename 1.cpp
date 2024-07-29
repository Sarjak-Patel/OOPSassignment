#include<iostream>
using namespace std;
class cricketer{
	public:
		int total_run[5];
		int i,total=0;
		double average;
	void member1()
	{
		cout<<"Enter total runs:"<<endl;
			for(i=0;i<5;i++)
			{
				cin>>total_run[i];
				total += total_run[i];
				average=total/5.0;
			}
	}
};
class batsman:public cricketer{
	public:
		 void member2() {
        cout << "The total run is: " << total << endl;
        cout << "The average run is: " << average << endl;
        if (average < 50)
            cout << "The player performance is not good" << endl;
        else
            cout << "The player performance is good" << endl;
    }
};
int main()
{
	batsman b1;
	b1.member1();
	b1.member2();
	
}
