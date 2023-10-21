#include<iostream>
using namespace std;
float fun(int x,int y){
	if(y==0){
		throw"Attempted to divide by zero.\n";
	}
	return(x/y);
}
int main(){
	int i=25,j=0;
	float k=0;
	try{
		cout<<"Enter the value of j\n";
		cin>>j;
		k=fun(i,j);
		cout<<k<<endl;
	}
	catch(const char *e){
		cout<<e<<endl;
		cout<<"end of main\n";
	}
}
