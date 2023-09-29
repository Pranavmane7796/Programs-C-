#include<iostream>
using namespace std;

class a
{
    protected:
    int ab;
    public:
        a()
        {
            ab=0;
            cout<<"Default constructor in a\n";
        }
};

class b : virtual public a
{
 
  public:
      b()
      {
//          ab=10;
          cout<<"Default constructor in b\n";
      }
    virtual  void getvalue()
      {
          
          cout<<"in class b="<<ab;
      }
      
};

class c : virtual public a
{
    
    public :
          c()
        {
            ab=12;
            cout<<"default constructor of c\n";
            
        }
        void getvalue()
      {
          cout<<"in class c="<<ab;
      }
};
class d :  public c, public b
{
  
  public:
       void getvalue()
      {
          c::getvalue();
          cout<<"in class d="<<ab;
      }
  
};

int main()
{
    d obj;
    obj.getvalue();
}


