#include<iostream>
using namespace std;

class A
{
	int x;
	public:
		void ip()
		{
			cin>>x;
		}
		friend void operator +(A &ob1, A &ob2)
		{
			cout<<"Sum = "<<ob1.x+ob2.x;
		}
}a,b;

int main()
{
	cout<<"Enter two numbers"<<endl;
	a.ip();
	b.ip();
	a+b;
	return 0;
}