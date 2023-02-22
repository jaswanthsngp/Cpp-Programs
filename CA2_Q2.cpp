#include<iostream>
using namespace std;
 
class overloading
{
	int x;
	public:
		void ip()
		{
			cin>>x;
		}
		friend overloading operator <(overloading ob1, overloading ob2)
		{
			overloading ob;
			ob.x= ob1.x<ob2.x;
			return ob;
		}
		friend overloading operator &&(overloading ob1, overloading ob2)
		{
			overloading ob;
			ob.x= ob1.x&&ob2.x;
			return ob;
		}
		friend overloading operator >=(overloading ob1, overloading ob2)
		{
			overloading ob;
			ob.x= ob1.x>=ob2.x;
			return ob;
		}
		friend overloading operator +(overloading ob1, overloading ob2)
		{
			overloading ob;
			ob.x= ob1.x+ob2.x;
			return ob;
		}
		friend overloading operator *(overloading ob1, overloading ob2)
		{
			overloading ob;
			ob.x= ob1.x*ob2.x;
			return ob;
		}
		void op()
		{
			cout<<x;
		}
};

int main()
{
	overloading O1,O2,O3,O4,O5,O6,O7;
	cout<<"Enter six numbers\t";
	O1.ip();
	O2.ip();
	O3.ip();
	O4.ip();
	O5.ip();
	O6.ip();
	O7=((O1>=O2) +(O3 && O4) *(O5<O6));
	O7.op();
	return 0;
}