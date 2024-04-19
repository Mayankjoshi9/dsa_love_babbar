#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout <<"enter no :";
    cin>>n;
    
        
        // int b=~n;
        // cout << b;
        int i=0;
        float ans=0;
        int j=32;
  while (j>0)
  {float bitpow,p;
    int bit =n&1;
    
    cout<<"bit is : "<<bit<<endl;
   p=pow(10,i);
   
    bitpow=(bit *p );
    
   ans=bitpow+ans;
   n=n >> 1;
   i++;
   j--;
  }
 
  cout <<"answer is : "<< (ans);
  
    
    

}