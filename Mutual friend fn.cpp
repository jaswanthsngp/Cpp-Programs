#include <iostream>
using namespace std;
class B;// forwarded declaration
class A
{
	int a;// pvt members
	public:
	void ipA()
	{ a=10; }// member func or cin>>a
	friend void sum(A o1,B o2);
}objA;
class B
{
	int b;// pvt members
	public:
	void ipB()
	{ b=40; }// member func or cin>>b
	friend void sum(A o1,B o2);
}objB;

void sum(A o1,B o2)
{
	int s;
	s=o1.a+o2.b;
	cout<<"Sum= "<<s;
}
main()
{
	objA.ipA();// taking a value
	objB.ipB();// taking b value
	sum(objA,objB);
}