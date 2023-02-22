#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Book
{
	int ID, price;
	string name, author;
	public:
		void ip()
		{
			cout<<"Enter Book Name\n";
			fflush(stdin);
			getline(cin, name);
			cout<<"Enter Author Name\n";
			fflush(stdin);
			getline(cin, author);
			cout<<"Enter Price and ID of book\n";
			cin>>price>>ID;
		}
		void op()
		{
			cout<<"Book Name: "<<name<<endl;
			cout<<"Written by: "<<author<<endl;
			cout<<"Price: "<<price<<"\tID: "<<ID<<endl<<endl;
		}
		void fop()
		{
			if(price<500)
			{
				cout<<"Book Name: "<<name<<endl;
				cout<<"Written by: "<<author<<endl;
				cout<<"Price: "<<price<<"\tID: "<<ID<<endl<<endl;
			}
		}
		void writefile()
		{
			ofstream tofile("record.txt", ios::app);
			if(price<500)
			{
				tofile<<"Book Name: "<<name<<endl;
				tofile<<"Written by: "<<author<<endl;
				tofile<<"Price: "<<price<<"\tID: "<<ID<<endl<<endl;
			}
		}
};

int main()
{
	int n,i,fn,c;
	cout<<"Enter the number of books\t";
	cin>>n;
	Book books[n];
	cout<<"Enter Details of "<<n<<" books\n";
	for(i=0; i<n; i++) books[i].ip();
	cout<<"\nData you enetered is\n";
	for(i=0; i<n; i++) { cout<<"Book "<<i+1<<endl; books[i].op(); }
	ofstream file;
	file.open("record.txt", ios::trunc);
	for(i=0; i<n; i++) books[i].writefile();
	cout<<"\nData written into record is (i.e. data of books cheaper than Rs.500)\n";
	for(i=0; i<n; i++) { cout<<"Book "<<i+1<<endl; books[i].fop(); }
	do{
		cout<<"\nPress 1 if you want to change any data, 0 to finish\t";
		cin>>c;
		if(c)
		{
			cout<<"Enter how many books' data to be changed\t";
			cin>>fn;
			int f[fn];
			cout<<"Enter the book numbers whose data is to be changed\n";
			for(i=0; i<fn; i++) cin>>f[i];
			cout<<"Enter the books' data\n";
			for(i=0; i<fn; i++) books[f[i]-1].ip();
			cout<<"\nCheck the data once\n";
			cout<<"Total Data\n";
			for(i=0; i<n; i++) { cout<<"Book "<<i+1<<endl; books[i].op(); }
			cout<<"\nData in record\n";
			for(i=0; i<n; i++) { cout<<"Book "<<i+1<<endl; books[i].fop(); }
		}
		else break;
	}while(c);
	file.open("record.txt", ios::trunc);
	for(i=0; i<n; i++) books[i].writefile();
	return 0;
}