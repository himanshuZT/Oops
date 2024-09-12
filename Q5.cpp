// 5. Implement a C++ program to demonstrate the concept of data abstraction using the concept of class and objects. Private: & Public:  

//SOURCE CODE

#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		int a,b;
		
	public:
		void set(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<a<<endl;
			cout<<b;
		}
};

int main()
{
	student s;
	s.set(10,20);
	s.display();
	return 0;

}

