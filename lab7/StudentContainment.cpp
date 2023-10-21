#include<iostream>
using namespace std;

class Address
{
	char addr[50];
	int pincode;
	
	public:
	void	getAddress()
		{
			cout<<"enter the address\n";
			cin>>addr;
			cout<<"enter the pin code\n";
			cin>>pincode;
		}
		void display1(){
			cout<<"address of student ="<<addr<<endl;
			cout<<"pin code ="<<pincode<<endl;
		}
};
class Student
{
	int rno,id;
	char name[10];
	int marks[5];
	Address ad;//containment object;
	public:
		void getData()
		{
		    cout<<"enter the name\n";
			cin>>name;
			cout<<"enter the roll number\n";
			cin>>rno;
			cout<<"enter the id\n";
			cin>>id;
			cout<<"enter the marks\n";
			for(int i =1 ; i<=5;i++)
			{
				cout<<"enter the marks for subject"<<i<<endl;
				cin>>marks[i];
			}
			ad.getAddress();
		}
		int getrollno(){
			return rno;
		}
		
        void display()
        {
        	cout<<"Name of student ="<<name<<endl;
        	cout<<"Roll of student ="<<rno<<endl;
        	cout<<"Id of student ="<<id<<endl;
        	cout<<"Marks are ="<<endl;
        		for(int i =0 ; i<5;i++)
			{
				cout<<marks[i];
			}
        	ad.display1();
		}  
};
int main (){
		int no,i,j;
		cout<<"enter the number of students\n";
		cin>>no;
		Student s1[no],temp;
		for( i =0;i<no;i++){
		     s1[i].getData();
	 }
	 for(i=0;i<no;i++)
	{
		for( j=i+1;j<no;j++)
		{
			if(s1[i].getrollno()>s1[j].getrollno())
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
			
		}
	}
 
 for(int i=0 ; i<no;i++){
 	s1[i].display();
 	 cout<<"------------------";
 }

	
}
