#include<iostream>
using namespace std;
int main(){
    int num,ornum,rem,res=0,cnt=0;
  
   
    
    for(num=1;num<=999;num++){
     
        
        rem=num%10;
        num=num/10;
        res=res+(rem*rem*rem);
    
   
    if(ornum==res){
       
        cnt++;
       
    }
    }
    
 cout<<cnt;
}
