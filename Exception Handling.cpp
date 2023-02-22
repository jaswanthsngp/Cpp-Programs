#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter a and b\t";
	cin>>a>>b;
	try
	{
		if(b!=0) cout<<"a/b= "<<a/b<<endl;
		else throw b;
	}
	catch(int i)
	{
		cout<<"Division with 0 is not defined";
	}
	catch(...) {cout<<"Default Exception\n";} //Will be excecuted when any other parameter won't match
	return 0;
}