#include<iostream>
using namespace std;
class demo{
	public:
		void display1(){
			cout<<"display of outer";
		}
	
	class demo1{	
	
		public:
			
	    void display(){ 
	    demo c;
	    c.display1();
	    cout<<"display of inner"<<endl;
	}
};
};
int main(){
demo::demo1 i;
i.display();

return 0;
}
