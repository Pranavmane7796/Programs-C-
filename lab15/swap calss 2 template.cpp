#include<iostream>
using namespace std;
template<class t,class t1>
void swap1(t &a,t1 &b){
	t1 temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int i=2.5f;
	float j=5.2f;
	swap1(i,j);
	cout<<i<<" "<<j;
}
