 /*6. Define a class Hotel in C++ with the following specifications
     Private members
•	Rno Data member to store room number
•	Name Data member to store customer name 
•	Tariff Data member to store per day charges 
•	NOD Data member to store number of days of stay 
•	CALC() Function to calculate and return amount as NOD*Tariff, and if the value of days* Tariff  >10000, then total amount is 1.05* days*Tariff. 
     Public members
•	Checkin() Function to enter the content Rno, Name, Tariff and NOD
•	Checkout() Function to display Rno, Name, Tariff, NOD and Amount (amount to be displayed by calling function) CALC()
*/
// SOURCE CODE

#include<iostream>
#include<string>
using namespace std;
class hotel
{
	private:
		int rno;
		string name;
		float tariff;
		int nod;
		float calc()
		{
			int a;
			a=nod*tariff;
			if(a<10000)
			{
				a=1.05*a;
				return a;
			}
		}
	public:
		void checkin()
		{
			cout<<"Room No :";
			cin>>rno;
			cin.ignore();
			cout<<"Customer Name :";
			getline (cin,name);		
			cout<<"Tariff : ";
			cin>>tariff;
			cout<<"Number Of Days :";
			cin>>nod;
			cout<<"\n";
		}
		void checkout()
		{
			cout<<"Room No: "<<rno<<endl;
			cout<<"Customer Name: "<<name<<endl;
			cout<<"Tariff: "<<tariff<<endl;
			cout<<"Number Of Days"<<nod<<endl;
			cout<<"\nTotal Charges:";
			cout<<calc();
		}
};

int main()
{
	hotel s;
	s.checkin();
	s.checkout();
	return 0;
}
