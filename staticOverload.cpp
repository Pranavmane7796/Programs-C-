#include<iostream>
using namespace std;

class complex{
   static int a,b;
    public:
        complex(int c,int d){
            c=a;
            d=b;
        }
        complex(int c){
            c=a;
            
        }
        complex(){
        }
        
        static void get1(int a ){
            cout<<a<<endl;
        }
        
        static void get1(int , int ){
            cout<<a<<" "<< b;
        }
        
        void display(){
            cout<<a<<" "<<b;
        }
};

int main(){
    complex c1;
    complex c2(10);
    complex c3(10,20);
    c2.display();
    c3.display();
    
}
