#include<iostream>
#include<string>
using namespace std;

static const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size = sizeof(alphanum) - 1;

int main()
{
	const string s= "0123456789!@#$%^&*~-_`ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int size= sizeof(s)-1, length, i;
	while(1){
	cout<<"Enter the length required\t";
	cin>>length;
	for(i=0; i<length; i++) cout<<s[rand() % ::size];
	cout<<endl;
	}
	return 0;
}