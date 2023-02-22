#include<iostream>
using namespace std;

template <class dt1, class dt2>
void adder(dt1 a, dt2 b)
{
	cout<<a+b<<endl;
}

int main()
{
	adder(2,5);
	adder(3.4,2.2);
	adder('a','b');
	adder(2,3.5);
	adder(3.4,'a');
	adder('a',2);
}