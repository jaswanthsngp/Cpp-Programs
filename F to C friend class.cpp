#include<iostream>
using namespace std;
class Celcius;
class Fahrenhiet
{
	float tempf;
	public:
		void input() {cin>>tempf;}
	friend class Celcius;
}F;
class Celcius
{
	float tempc;
	public:
	void temp_convert(Fahrenhiet F)
	{
	tempc=(F.tempf-32)/1.8;
	cout<<F.tempf<<" Degree fahrenhiet= "<<tempc<<" Degree Celcius";
	}
}C;
int main()
{
	cout<<"Enter temperature in Farenhiet\t";
	F.input();
	C.temp_convert(F);
}