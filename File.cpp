#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file;
	file.open("file.txt", ios::out);
	file<<"File written";
	ifstream ifile;
	ifile.open("file.txt", ios::in);
	cout<<ifile.tellg();
	return 0;
}