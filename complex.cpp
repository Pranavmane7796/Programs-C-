#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
      void get(){
          cout<<"enter the real and imaginary nu"<<endl;
          cin>>real>>img;
          
      }  
      void display(){
          cout<<real <<"+"<<img<<"i";
      }
      
      complex add(complex & c1){
          
          complex c3;
          c3.real=this->real+c1.real;
          c3.img=this->img+c1.img;
          return c3; 
      }
};
int main(){
    complex c1,c2;
    c1.get();
    c2.get();
    complex c4 = c1.add(c2);
    c4.display();
}
