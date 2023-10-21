#include<iostream>
using namespace std;
class time{
	int hr,min,sec;
	public:
		time(int h,int m,int s){
			hr=h;
			min=m;
			sec=s;
		}
		void display(){
			cout<<"Time is:"<<hr<<":"<<min<<":"<<sec<<endl;
		}
		friend void operator+(time &,int );
		friend void operator-(time &,int );
};
void operator+(time &t,int y){
	t.hr=t.hr+y;
	t.min=t.min+y;
	t.sec=t.sec+y;
	cout<<"Time is:"<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
}
void operator-(time &t,int y){
	t.hr=t.hr-y;
	t.min=t.min-y;
	t.sec=t.sec-y;
	cout<<"Time is:"<<t.hr<<":"<<t.min<<":"<<t.sec<<endl;
}int main(){
	time t1(10,4,20);
	t1+2;
	t1-1;
	
}

