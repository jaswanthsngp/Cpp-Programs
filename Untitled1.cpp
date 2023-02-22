#include<iostream>
#include<fstream>
using namespace std;
class data{
public:
	string i1,p1,n1,a1;
void getdata(){
	cout<<"id :";
		cin>>i1;
		
		cout<<"price :";
		cin>>p1;
		
		cout<<"name of book :";
		cin>>n1;
		
		cout<<"name of author :";
		cin>>a1;
}
};

int main()
{
	data obj;
	int id, price,num;
	string n1,a1,i1,p1,c,y,z,line;
	z="yes";
    fstream file("Book data-1");
	if(!file){
		cout<<"file not created";
		exit(1);
	}
	else{
		cout<<"file created successfully";
	}
	cout<<"\n\nenter five books records"<<endl;
	for(int i=0; i<5; i++){
		cout<<"------enter the data of book-"<<i+1<<"--------"<<endl;
	obj.getdata();
		file<<"id :"<<obj.i1<<" price :"<<obj.p1<<"name of book :"<<obj.n1<<"name of author :"<<obj.a1<<endl;
	}
	cout<<"Do you want to read the file and exit "<<endl;
	cin>>y;
	if(y.compare(z)==0){	
	fstream ob2("Book data-1",ios::in);
while(getline(ob2,c)){
	cout<<c<<endl;
}
}
cout<<"dou you want to make some corrections"<<endl;
cin>>c;
	if(c.compare(z)==0){
    cout<<"which book  do you want to change "<<endl;
cin>>num;
}
if(num==1){
	
	file.seekp(0,ios::beg);
	obj.getdata();
	fstream ob2("Book data-1",ios::in);
	file<<"id :"<<obj.i1<<" price :"<<obj.p1<<"name of book :"<<obj.n1<<"name of author :"<<obj.a1<<endl;
while(getline(ob2,c)){
	cout<<c<<endl;
}
};
	if(num==2){
obj.getdata();
	file.seekp(100,ios::beg);
	file<<"id :"<<obj.i1<<" price :"<<obj.p1<<"name of book :"<<obj.n1<<"name of author :"<<obj.a1<<endl;
    fstream ob2("Book data-1",ios::in);
while(getline(ob2,c)){
	cout<<c<<endl;
}
};
if(num==3){
	cout<<line<<endl;
	file.seekp(200,ios::beg);
	obj.getdata();
	fstream ob2("Book data-1",ios::in);
	file<<"id :"<<obj.i1<<" price :"<<obj.p1<<"name of book :"<<obj.n1<<"name of author :"<<obj.a1<<endl;
while(getline(ob2,c)){
	cout<<c<<endl;
}
};
if(num==4){
	cout<<line<<endl;
	file.seekp(300,ios::beg);
	obj.getdata();
	fstream ob2("Book data-1",ios::in);
	file<<"id :"<<obj.i1<<" price :"<<obj.p1<<"name of book :"<<obj.n1<<"name of author :"<<obj.a1<<endl;
while(getline(ob2,c)){
	cout<<c<<endl;
}
};
if(num==5){
	cout<<line<<endl;
	file.seekp(400,ios::beg);
	obj.getdata();
	fstream ob2("Book data-1",ios::in);
	file<<"id :"<<obj.i1<<" price :"<<obj.p1<<"name of book :"<<obj.n1<<"name of author :"<<obj.a1<<endl;
while(getline(ob2,c)){
	cout<<c<<endl;
}
};
}