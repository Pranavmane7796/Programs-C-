#include<iostream>
using namespace std;

class Substract
{
    int real,img;
    
    public:
        Substract(){
            
        }
        
        Substract (int x , int y)
        {
            real =x;
            img = y;
        }
        
        Substract operator-(Substract&d)
        {
            Substract s;
            s.img = img - d.img;
            s.real = real - d.real;
        }
        
        void print()
        {
            cout<<real<<"+"<<img<<endl;
        }
};
int main(){
    Substract s1(1,2),s2(21,32),s3;
    s3=s1+s2;
    
}
