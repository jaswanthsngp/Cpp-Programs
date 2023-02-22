#include<iostream>
using namespace std;

int main()
{
	int i, j, n, a[200], d[199];
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(i=1; i<=n; i++) 
	{
		d[i-1]=a[i]-a[i-1];
	}
	for(i=0; i<n-1; i++) cout<<d[i]<<' ';
}