#include<iostream>
using namespace std;


int main(){
	int val1,val2,result;
	cout<<"enter two value value\n";
	cin>>val1>>val2;
	
	
	try{
		if(val2==0)      
	throw "divided by 0 is not allowed\n";
	
	result = val1/val2;
	cout<<result;

	
}
catch(const char *e)
{
	cout<<e<<endl;
		cout<<"end of main\n";
}

	
	
	
}
