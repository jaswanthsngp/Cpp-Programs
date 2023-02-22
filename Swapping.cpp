#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter a,b";
	cin>>a>>b;
	c=b;
	b=a;
	a=c;
	cout<<"Swapped values are "<<a<<" "<<b;
}