#include<iostream>
using namespace std;
main()
{
	int n,i,f1=0,f2=1,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i==0) cout<<"0"<<'\t';
		else if(i==1) cout<<"1\t";
		else 
		{
			temp=f1;
			f1=f2;
			f2=temp+f1;
			cout<<f2<<"\t";
		}
	}
}