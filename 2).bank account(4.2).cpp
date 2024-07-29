// 2) Define a class to represent a bank account.

#include<iostream>
using namespace std;
class pin{
	public:
	void get(){
	
	int access=1234,paisa;
	int Balance=30000;
	int choice,number,atm,key;
	cout<<"Press 1. and then press enter to access account via pin number\nor"<<endl;
	cout<<"Press 0. and press enter to get help"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
		switch(choice)
	{
		case 1: cout<<"\t\t-----Enter the pin-----\t\t"<<endl;
		        cin>>number;
		       
		        if(number == access)
		        {
		        	cout<<"\t\t\t\t\tATM Main Menu screen"<<endl;
		        	cout<<"\t\t\t\t\tEnter[1] to deposit cash"<<endl;
		        	cout<<"\t\t\t\t\tEnter[2] to withdraw cash"<<endl;
		        	cout<<"\t\t\t\t\tEnter[3] to balance enquiry"<<endl;
		        	cout<<"\t\t\t\t\tEnter[0] to Exit atm"<<endl;
		        	cin>>atm;
		        	switch(atm)
		        	{
		        		case 1: cout<<"ATM account deposit system"<<endl;
		        		        cout<<"The name of Account holder:Rakesh Kharva"<<endl;
		        		        cout<<"Account Holders:Address is: Gujarat"<<endl;
		        		        cout<<"The Branch Location is: Vadodara"<<endl;
		        		        cout<<"Account Number is:456977532"<<endl;
		        		        cout<<"Present availabe Balance:"<<Balance<<endl;
		        		        cout<<"Enter the amount to deposited:"<<endl;
		        		        cin>>paisa;
		        		        Balance += paisa;
		        		        cout<<"Your new available balance amount is:"<<Balance<<endl;
		        		        break;
		        		case 2: cout<<"ATM account withrawal"<<endl;
		        		        cout<<"The name of Account holder:Rakesh Kharva"<<endl;
		        		        cout<<"Account Holders:Address is: Gujarat"<<endl;
		        		        cout<<"The Branch Location is: Vadodara"<<endl;
		        		        cout<<"Account Number is:456977532"<<endl;
		        		        cout<<"Present availabe Balance:"<<Balance<<endl;
		        		         cout<<"Enter the amount to withdrawal:"<<endl;
		        		             cin>>paisa;
		        		        if(paisa > Balance)
		        		        {
		        		        	cout<<"insufficient available balance in your account \n sorry!!"<<endl;
								}
								else 
								{
									
		        		             Balance -= paisa;
		        		             cout<<"Your new available balance amount is:"<<Balance<<endl;
								}
		        		        break;
		        		case 3:cout<<"Thank you for chosing balance inqury"<<endl;
		        		       cout<<"Your Account Balance availabe is:"<<Balance<<endl;
		        		       break;
		        		case 0:cout<<"Exit atm......"<<endl;
		        		        break;
					}
					
			
				}
				
				else
				{
					cout<<"------Thank you-----"<<endl;
					cout<<"you have made your attempt which failed!!! number attempt allow!! Sorry!!"<<endl;
				}
				
				break;
    
		case 0: cout<<"\t\t\t\t\tATM Account status"<<endl;
		        cout<<"\n\nyou must have the correct pin number to access this account."<<endl;
		        cout<<"See your bank representative for assistance during bank openning hour.\n\n thanks for,Your choice today!!"<<endl;
		        break;
	}
	
}
	
};
int main()
{
	pin A1;
	A1.get();
}
