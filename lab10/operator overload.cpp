#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
		complex(){
			real=img=0;
		};
		complex(int real,int img){
			this->real=real;
			this->img=img;
		}
		void display(){
			if(img>0){
				cout<<"Complex Number:"<<real<<"+"<<img<<"i"<<endl;
			}
			else{
				cout<<"Complex Number:"<<real<<img<<"i"<<endl;	
			}
		}
		complex operator+(complex &c){
			complex t;
			t.real=this->real+c.real;
			t.img=this->img+c.img;
			return t;
		}
		complex operator-(complex &c){
			complex t;
			t.real=this->real-c.real;
			t.img=this->img-c.img;
			return t;
		}
		complex 
};
int main(){
	complex c1(10,5);
	complex c2(20,10);
	complex c3=c1+c2;
	c3.display();
	complex c4=c1-c2;
	c4.display();
	
}
