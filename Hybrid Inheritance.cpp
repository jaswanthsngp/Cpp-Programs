// If a class is used by two or more classes, the keyword "virtual" must be written with it in every inheritance
#include<iostream>
using namespace std;
class A
{
	protected: int x1;
	public: void Aip() { cin>>x1; }
};
class B: virtual public A
{
	protected: int x2;
	public: void Bip() { cin>>x2; }
};
class C: public virtual A
{
	protected: int x3;
	public: void Cip() { cin>>x3; }
};
class D: protected B, protected C
{
	int s=0;
	public: void adder() 
	{
		cout<<"Enter 3 numbers\t";
		Aip(); Bip(); Cip();
		s=x1+x2+x3;
		cout<<s;
	}
}o1;
int main()
{
	o1.adder();
}