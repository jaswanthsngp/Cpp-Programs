#include <iostream>
using namespace std;
void divide(double x, double y)
{
cout<<"\nInside function";
try
{
if(y==0.0)
throw y; //Throwing double
else
cout<< "\nDivision= " << x/y;
}
catch( double) // Catch a double
{
cout<<"\ncaught double inside function";
throw; // Rethrowing double
}
cout<<"\nend of function";
}
int main()
{
cout<<" Inside main";
try
{
divide(10.5,2.0);
divide(20.0, 0.0);
}
catch(double)
{
cout<<"\ncaught double inside main";
}
cout<<"\nend of main";
return 0;
}