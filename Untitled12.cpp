#include<iostream>
using namespace std;
class overloading
{
	public:
		int x;
		void input(){
			cout<<"Enter the number:"<<endl;
			cin>>x;
		}
		friend int operator >= (overloading &a, overloading &b){	//made this return type int from void since it has to give either 1 or 0
			if(a.x>=b.x){
				return 1;
			} else return 0;											//Added return 0 so that it should not return any garbage value
		}
		friend int operator && (overloading &c, overloading &d){
			if(c.x==d.x){
				return 1;
			} else return 0;
		}
		friend int operator < (overloading &e, overloading &f){		//made this return type int from void since it has to give either 1 or 0
			if(e.x<f.x){
				return 1;
			} else return 0;
		}
		void operator =(int y)				//Added this because all the others return int and we can't convert int to class directly
		{
			x=y;
		}
};
int main(){
	overloading O1,O2,O3,O4,O5,O6,O7;
	O1.input();
	O2.input();
	O3.input();
	O4.input();
	O5.input();
	O6.input();
	O7=(O1>=O2) +(O3 && O4) * (O5<O6);
	return 0;
}