#include<iostream>
using namespace std;
class demo{
	int a=10;
	
	public:
		
		int display(){
		return a;
		}
	class demo1{	
		int b;
		public:
	    void demo2(){
	    
//	    cout<<d->a<<endl;
cout<<demo1::demo::display();
	    cout<<"Inner class called";
	}
};
};
int main(){
//	dem1 d1;
//	d1.
demo::demo1 obj;
demo d;
obj.demo2();
d.display();
	return 0;
}
