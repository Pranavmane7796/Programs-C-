
#include<iostream>
using namespace std;
class shape
{
	public :
		shape(){
			cout<<"default \n";
	
		}
		virtual void get(){
			
		}
	virtual	int set(){
			return 0;
		}
	virtual	void display(){
		cout<<"display shape";
	};
};

class rectangle : public shape
{
	int side;
	public:

		void get(){
			cout<<"enter the side of square\n";
			cin>>side;
		}
        
        int set(){
        	return side * side;
		}
		void display(){
			cout<<set()<<endl;
		}
	
};

class square : public shape
{
	int length ,breadth ;
	public:
		void get(){
			cout<<"enter the length and breadth\n";
			cin>>length>>breadth;
		}
		
		int set(){
			return length * breadth;
		}
		void display(){
			cout<<"the values are"<<" "<<set()<<endl;
		}
};
int main(){
	
	shape * ptr = new shape();
	 ptr = new rectangle();
	 ptr->get();
      ptr->display();
      ptr = new square();
      ptr->get();
      ptr->display();

}
