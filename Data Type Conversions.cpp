#include<iostream>
using namespace std;

class adder
{
	int n, s=0, a;
	public: 
	adder(int N)		// Constructor for Basic to Class conversion
	{
		n= N;
		cout<<"Enter the numbers\n";
		for(int i=0; i<n; i++) 
		{
			cin>>a;
			s=s+a;
		}
		cout<<"Sum is "<<s<<endl;
	}
};

class Rupee
{
	public:
	int r;
	void show() {cout<<r<<ends;}
}R;

class Dollar  // Class to Basic
{
	int d,r;
	public:
	void input() { cin>>d;}
	operator int () { r=d*75; return r; }		//Cast Overloading
	operator Rupee() { Rupee r1; r1.r=d*75; return r1;} //class to class
	//Dollar(Rupee r2) { d=r2.r/75; cout<<d;}
}D;

int main()
{
	int a, b, d, r, n;
	char c;
	cout<<"Enter an integer and a charachter\t";
	cin>>a>>c;
	b=a+int(c);									//Basic to Basic Explicit
	cout<<"Sum of int and char is "<<b<<endl;
	cout<<"Enter number of numbers\t";
	cin>>n;
	adder S(n);
	cout<<"Enter the value in Dollars\t";
	D.input();
	r=D;
	cout<<"It is equal to Rs."<<r<<endl;
	R=D;
	R.show();
	//Dollar D1(R);
	return 0;
}