#include<iostream>
using namespace std;

class add
{
    private:
    int a , b;
    public :
        add(){
            cout<<"default constructor\n";
        }
        add(int x,int y){
            a=x;
            b=y;
        }
        add operator+(add & d1)
        {
           add res;
           res.a = this->a + d1.a;
           res.b = this->b + d1.b;
           return res;
        }
        void print()
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
};
int main(){
    add d(1,2) ,d1(12,2);
    add d3 = d+d1;
    d3.print();
//    cout<<d3.a<<"+"<<d3.b<<"i";
     

}
