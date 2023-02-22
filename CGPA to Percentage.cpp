#include<iostream>
using namespace std;
static void convert(float CGPA)
	{
		float per=CGPA*10;
		cout<<per;
	}
int main()
{
	static float CGPA;
	cin>>CGPA;
	convert(CGPA);
}