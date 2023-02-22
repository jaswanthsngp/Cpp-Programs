#include<iostream>
using namespace std;
main()
{
	int i,n,sum=0;
	cin>>n;
	for(i=1;i<=n;i++) sum=sum+i;
	cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
}