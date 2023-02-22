#include<iostream>
using namespace std;
class student
{
	int r_no;
	float per;
	public:
	void ip()
	{
		cin>>r_no>>per;
	}
	void display()
	{
		cout<<"Roll No:"<<r_no<<"\tPercentage:"<<per<<"\tGrade:";
		if(per>=90) cout<<'A';
		else if(per>=75) cout<<'B';
		else if(per>=55) cout<<'C';
		else if(per>=40) cout<<'D';
		else cout<<'F';
	}
};
main()
{
	class student s;
	cout<<"Enter the Roll Number and Percentage ";
	s.ip();
	s.display();
}