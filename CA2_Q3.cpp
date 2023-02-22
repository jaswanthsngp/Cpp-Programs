#include<iostream>
using namespace std;

class Triangle
{
	float base, hieght, area;
	public:
		void ip()
		{
			cout<<"Enter the base and hieght"<<endl;
			cin>>base>>hieght;
		}
		operator float ()
		{
			area= base*hieght/2;
			return area;
		}
};

int main()
{
	Triangle t;
	float a;
	t.ip();
	a=t;
	cout<<"area is "<<a<<"square units"<<endl;
	return 0;
}

/*Initializer list:
		It is a special syntax used in parameterized constructors to specify values of elements, in a simpler way.
		for example, class_name(int a, int b): x(a), y(b) { //anyother calculations to be done }
		is equal to class_name(int a, int b) { x=a; y=b; //anyother calculations to be done }*/