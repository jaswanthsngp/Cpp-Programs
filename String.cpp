#include<iostream>
#include<string>
using namespace std;
main()
{
// initialization of a string
	string s1="ABC";
	cout<<"S1 string:"<<s1<<endl;
	string s2("ABCD");
	cout<<"S2 string:"<<s2<<endl;
	string s3="STUDY";
	cout<<"S3 string:"<<s3<<endl;
	
// String Functions

// length function or size
	cout<<"length of s1 string is:"<<s1.length()<<endl;
	cout<<"length of s2 string is:"<<s2.size()<<endl;
	cout<<"capacity"<<s1.capacity()<<endl;
	
//swap
	swap(s1,s2);
	cout<<"S1 string: after swap "<<s1<<endl;
	cout<<"S2 string: after swap "<<s2<<endl;

//find_last_of()
	s1="ABCDAAB";
	cout<<"find_last_of('A') "<<s1.find_last_of('A')<<endl;
	cout<<"find_first_of('A') "<<s1.find_first_of('A')<<endl;

//clear function
	s3.clear();									//clear() deletes all the characters availabe in string.
	cout<<"length of s3 after clear function:"<<s3.length()<<endl;
	
//empty function
	cout<<"empty function:"<<s3.empty()<<endl;	//empty() tells whether our string is empty or not. 1-empty and 0- non empty
	
//append function
	s3="LPU*UNIVERSITY";
	s3.append("*JALANDHAR");					// append() string at the end
	cout<<"s3 string after append:"<<s3<<endl;
	
//erase(a,b) function
	s3.erase(4,10);								//start erasing from 4th index and erase 10 characters after it
	cout<<"after erase:"<<s3<<endl;
	
//replace function
	s3.replace(5,10,"JAL");						//from 5 index it is replacing 10 characters with "JAL" 
	cout<<"string after replace:"<<s3<<endl;
	
//substr function s3: abc1234abc
	cout<<"substring using two arguments:"<<s3.substr(5,3)<<endl;	//from 5th index it is giving 3 characters.
	cout<<"substring using single argument:"<<s3.substr(2)<<endl;	//it is returning all the characters afters 2nd index.
	
//insert function
	cout<<"after insert:"<<s3.insert(4,"UNIVERSITY")<<endl;	//start inserting from 4th index.
	
// find and rfind
	cout<<"location of U using Find:"<<s3.find("U")<<endl;	// abUxUyz 2
	cout<<"location of U using rFind:"<<s3.rfind("U")<<endl;//4
	
//string operators

//concatenation +
	
	s1="*PHAGWARA";
	s3=s3+s1;									// concatination of two strings
	cout<<"Concatinated string:"<<s3<<endl;
	string s5="PUNJAB";
	cout<<"using character:"<<s3+'*'+s5<<endl;
	
//assignment =
	
	string s4=s3;//assinging s3 to s4 by assignment operator.
	cout<<"String assignment:"<<s4<<endl;
	
// equlaity ==
	if(s1==s2)
	cout<<"Equal"<<endl;
	else
	cout<<"Not equal"<<endl;
	
// greater than >

	if(s1>s2)
	cout<<"Greater"<<endl;
	else
	cout<<"Not greater"<<endl;
	
//less than <
	
	if(s1<s2)
	cout<<"smaller"<<endl;
	else
	cout<<"Not smaller"<<endl;
	
//not Equal to !=
	
	if(s1!=s2)
	cout<<"not Equal"<<endl;
	else
	cout<<"equal"<<endl;
	s1="Rahul";
	s2="Ramu";
	
//Compare
	int c=s1.compare(s2);
	cout<<c;
	cout<<s1.compare(0,2,s2,0,2);
}