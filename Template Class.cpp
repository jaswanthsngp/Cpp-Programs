#include<iostream>
using namespace std;

template<class dt1, class dt2>
class Max
{
	dt1 a; dt2 b;
	public:
		Max(dt1 x, dt2 y): a(x), b(y) {}
		void max1()
		{
			cout<<(a>b?a:b)<<endl;
		}
};

int main()
{
	Max <int, int>o1(2,5);
	Max <float, float>o2(3.4,2.2);
	Max <char, char>o3('a','b');
	Max <int, float>o4(2,3.5);
	Max <float, char>o5(3.4,'a');
	Max <char, int>o6('a',2);
	o1.max1(); o2.max1();
	o3.max1(); o4.max1();
	o5.max1(); o6.max1();
	return 0;
}