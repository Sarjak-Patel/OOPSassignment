/*  Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance) */

#include<iostream>
using namespace std;
class cricket{
	public:
		int age;
		char name[30];
		
		void input_data(){
			cout<<"Enter cricketer name:";
			cin>>name;
			cout<<"Enter cricketer age:";
			cin>>age;
		}	
};

class Batsman:public cricket{
	public:
			int totalRuns, bestPerformance, totalInn, totalNo;
			float averageRuns;
		void inputbatsmandetail(){
			cout<<"Enter Total Runs(Runs): "<<endl;
			cin>>totalRuns;
			cout<<"Enter Best Performance: "<<endl;
			cin>>bestPerformance;
			cout<<"Enter Total Innings Played(Inn):"<<endl;
			cin>>totalInn;
			cout<<"Enter Total NotOut(NO):"<<endl;
			cin>>totalNo;
		}
		void calculateAverageRuns(){
			if(bestPerformance!=0)
			{
				averageRuns=(float)totalRuns / (totalInn - totalNo);
			}
			else
			{
				averageRuns=(float)0.0;
			}
		}
		void displayData() {
        	cout << "\nBatsman Details" << endl;
        	cout << "Name: " << name << endl;
        	cout << "Age: " << age <<" Years" <<endl;
        	cout << "Total Runs: " << totalRuns << endl;
        	cout << "Average Runs: " << averageRuns << endl;
        	cout << "Best Performance: "<< bestPerformance << endl;
   		}
};

int main()
{
	Batsman bat;
	bat.input_data();
	bat.inputbatsmandetail();
	bat.displayData();
}
