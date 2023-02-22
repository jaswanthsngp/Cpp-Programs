#include<iostream>
using namespace std;
class student
{
	char name[30],section[5];
	int reg;
	float CGPA;
	public:
	void getdata()
	{
		cin>>name>>reg>>section>>CGPA;
	}
	void display()
	{
		cout<<name<<'\t'<<reg<<'\t'<<section<<'\t'<<CGPA;
	}
};
main()
{
	int n,i;
	cout<<"Enter the Number of students\t";
	cin>>n;
	class student s[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the Name, Registration Number, Section and CGPA of the student respectively\n";
		s[i].getdata();
	}
	for(i=0;i<n;i++) s[i].display();
}