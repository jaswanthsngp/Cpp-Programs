#include<iostream>
using namespace std;

class A
{
	protected: 
	A(){ cout<<"Constructing A\n"; }
	~A(){ cout<<"Destructing A\n"; }
};

class B
{
	protected: 
	B() { cout<<"Constructing B\n";}
	~B(){ cout<<"Destructing B\n"; }
};

class C: protected B, protected A
{
	public: 
	C() {cout<<"constructing C\n";}
	~C(){ cout<<"Destructing C\n"; }
};

int main()
{
	C O;
	return 0;
}