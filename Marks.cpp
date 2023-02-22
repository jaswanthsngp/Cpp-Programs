#include<iostream>
using namespace std;

class A
{
	protected: int rno, ca, att;
};

class B
{
	protected: int MTT, ETE;
};

class C: protected A, protected B
{
	int t, attmarks;
	public:
		void ip()
		{
			cout<<"Enter Roll NUmber, CA Marks(Avg of Best 2) and Attendance Percentage\n";
			cin>>rno>>ca>>att;
			cout<<"Enter Mid Term and End Term marks\n";
			cin>>MTT>>ETE;
		}
		void attendance()
		{
			if(att>=95) attmarks=5;
			else if (att>=90) attmarks=4;
			else if (att>=85) attmarks=3;
			else if (att>=80) attmarks=2;
			else if (att>=75) attmarks=1;
			else attmarks=0;
		}
		void result()
		{
			attendance();
			t = attmarks+ ca*2/3+ MTT/2+ ETE*55/40;
			cout<<"Total Marks= "<<t<<endl;
			if(t>=40) cout<<"Pass"; else cout<<"Fail";
		}
}S;

int main()
{
	S.ip();
	S.result();
	return 0;
}