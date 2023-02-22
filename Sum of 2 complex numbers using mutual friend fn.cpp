#include<iostream>
using namespace std;
class real;
class imaginary;
class real
{
	int ra,rb;
	public:
	void input() {cin>>ra>>rb;}
	friend void adder(real r1, imaginary i1);
};
class imaginary
{
	int ia,ib;
	public:
	void input() {cin>>ia>>ib;}
	friend void adder(real r1,imaginary i1);
};
void adder(real r1,imaginary i1)
{
	int sr=r1.ra+r1.rb;
	int si=i1.ia+i1.ib;
	cout<<"Sum is "<<sr<<"+i"<<si;
}
int main()
{
	real r1;
	imaginary i1;
	cout<<"Enter the real parts of the numbers\t";
	r1.input();
	cout<<"Enter the imaginary parts of the numbers\t";
	i1.input();
	adder(r1,i1);
}