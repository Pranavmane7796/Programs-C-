#include<iostream>
using namespace std;
template<class t>
void swap1(t &a,t &b){
	t temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int i=2,j=5;
	swap1(i,j);
	cout<<i<<" "<<j;
}
