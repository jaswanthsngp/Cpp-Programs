#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b&&a>=c) cout<<"Largest number is "<<a;
	else if(b>=c&&b>=a) cout<<"Largest number is "<<b;
	else if(c>=b&&c>=a) cout<<"Largest number is "<<c;
}