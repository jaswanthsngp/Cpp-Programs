#include<iostream>
using namespace std;

int main()
{
	int v, i, n2=0, n3=0, n5=0;
	cin>>v;
    while(v%2==0) { v=v/2; n2++;}
    while(v%3==0) { v=v/3; n3++;}
	while(v%5==0) { v=v/5; n5++;}
	cout<<n2<<ends<<n3<<ends<<n5;
	return 0;
}