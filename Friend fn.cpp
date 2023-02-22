#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		void ip()
		{
			cin>>a>>b;
		}
	friend void sum(A &sum);
};
void sum(A &sum)
{
	int s=sum.a+sum.b;
	cout<<s;	
}
main()
{
	A o1;
	o1.ip();
	sum(o1);
}