#include<iostream>
using namespace std;

class A
{
	protected: int a, b;
	public:
	void ip(){ cout<<"Swap\nEnter two numbers\t"; cin>>a>>b; }
	void op(){ cout<<a<<ends<<b<<endl; }
};

class B: private A
{
	int c;
	public:
	void swap() 
	{ 
		ip();
		c=a; a=b; b=c;
		cout<<"After Swap\t";
		cout<<a<<ends<<b<<endl;
	}
};

main()
{
	B O;
	O.swap();
	return 0;
}