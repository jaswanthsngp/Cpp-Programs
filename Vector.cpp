//Member Functions push_back(), size(), and operator[]
//Our first example,VECTOR,shows the most common vector operations.
// vector.cpp
// demonstrates push_back(), operator[], size()
#include <iostream>
#include <vector>

using namespace std;
int main()
{
vector <int> v; //create a vector of ints
v.push_back(10); //put values at end of array
v.push_back(11);
v.push_back(12);
v.push_back(13);
if (v.empty())//check weather container is empty or not
{ cout<<"not possible";
}
else
{
cout<<"It is Possible To Insert and Insertion Starts Now"<<endl ;


v[0] = 20; //replace with new values
v[3] = 23;
for(int j=0; j<v.size(); j++) //display vector contents
cout << v[j] <<" " ; //20 11 12 23
cout << endl;

cout<<v.size()<<endl;// find size of vector v

vector <int> vec2(v);//copy constructor where v2 will get values that v has
cout<<vec2.size()<<endl;// find size of vector vec2
v.clear();//All Items are removed From The Container
cout<<v.size()<<endl;//Find Size after Clearing All The Items
vec2.swap(v);//Swap vec2 with v, vec2 will get what v has
cout<<"Size of Vec2 and V are given By: "<<v.size()<<ends<<vec2.size()<<endl;

//for(vector<int>::iterator itr =v.begin();itr!=v.end();++itr)
//cout<<*itr<<"\t";
}


return 0;
}