#include<iostream>
using namespace std;

int main()
{
	int n,i,j,s15=0,s35=0;
	cout<<"Enter the number of rows for square array\t";
	cin>>n;
	int a[n][n];
	cout<<"Enter the elements\n";
	for(i=0; i<n; i++) for(j=0; j<n; j++) cin>>a[i][j];
	for(i=0; i<n; i++) for(j=0; j<n; j++) if(n-j==i+1) s35=s35+a[i][j];//for d2
	for(i=0; i<n; i++) for(j=0; j<n; j++) if(n-j==n-i) s15=s15+a[i][j];//for d1
	cout<<s15<<ends<<s35;
	return 0;
}