#include<iostream>
using namespace std;
class A
{
	protected: int a[5];
	public:
	void ip()
	{
		cout<<"Enter 5 numbers\t";
		for(int i=0;i<5;i++) cin>>a[i];
	}
};
class B: private A
{
	int max=0;
	public:
	void Max_Value() { ip(); for(int i=0; i<5; i++) if(max<a[i]) max=a[i]; }
	void Display() {cout<<"Maximum Number is "<<max<<endl;}
}b;
class C: private A
{
	int s=0;
	public:
	void sum() { ip(); for(int i=0;i<5;i++) s=s+a[i];}
	void Display() { cout<<"Sum= "<<s<<endl;}
}c;
class D: private A
{
	public: void Display() { ip(); for(int i=0; i<5; i++) if(a[i]%2==0) cout<<a[i]<<ends;}
}d;
int main()
{
	b.Max_Value();
	b.Display();
	c.sum();
	c.Display();
	d.Display();
	return 0;
}