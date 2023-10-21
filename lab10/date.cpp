#include<iostream>
using namespace std;
class date{
	int dd;
	int mm;
	int yy;
	public:
	date(int d,int m,int y){
		dd=d;
		mm=m;
		yy=y;
	}
	void display(){
		cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
	}
	friend void operator +(date &,int);	
	friend void operator -(date &,int);
	date operator++(){
		date d1=(*this);
		++this->dd;
		++this->mm;
		++this->yy;
		return d1;
	}
	date operator--(int);
};
 void operator +(date &t,int y){
		t.dd=t.dd+y;
		t.mm=t.mm+y;
		t.yy=t.yy+y;
		cout<<t.dd<<"-"<<t.mm<<"-"<<t.yy<<endl;	
	}void operator -(date &t,int y){
		t.dd=t.dd-y;
		t.mm=t.mm-y;
		t.yy=t.yy-y;
		cout<<t.dd<<"-"<<t.mm<<"-"<<t.yy<<endl;	
	}
	
int main(){
	int dd;
	int mm;
	int yy;
	date d(5,10,2023);
	d+2;//d2=operator+(date,int)
	d-1;
	date d1=++d;
	d1.display();
	d.display();
	
}
