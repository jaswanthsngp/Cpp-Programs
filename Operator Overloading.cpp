#include<iostream>
using namespace std;

class A
{
	int x,y;
	public:
		void ip()
		{
			cout<<"Enter two numbers"<<endl;
			cin>>x>>y;
		}
		void op()
		{
			cout<<x<<ends<<y<<endl;
		}
		void operator ++(int)
		{
			x= x++;
			y= y++;
		}
}a;
int main()
{
	a.ip();
	a.op();
	a++;
	a.op();
	a.op();
	return 0;
}