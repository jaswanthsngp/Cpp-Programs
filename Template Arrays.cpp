#include<iostream>
using namespace std;
#define MAX 5			//Here, we predefined MAX and set it to 5, we can either take input from the user for it

template <class Type>
Type sum(Type A[])
{
	Type Total=0;
	for(int i=0; i<MAX; i++) Total+=A[i];
	return Total;
}

template<class Type>
void read(Type A[])
{
	for(int i=0; i<MAX; i++) cin>>A[i];
}

int main()
{
	int Array[MAX];
	float Array1[MAX];
	cout<<"Enter the int array elements\n";
	read<int>(Array);
	cout<<"Sum ="<<sum<int>(Array)<<endl;
	cout<<"Enter the float array elements\n";
	read<float>(Array1);
	cout<<"Sum ="<<sum<float>(Array1)<<endl;
	return 0;
}