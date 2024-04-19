#include<iostream>
#include <math.h>
using namespace std;
int main()
{
   int n;
   cout<<"enter no : ";
   cin>>n;
   int i=0;
   int ans=0;
   while (n!=0 )
   {float bitpow,p;
   
    /* code */
    int bit=n & 1;
    
    p=pow(10,i);
   
    bitpow=(bit *p );
    
   ans=bitpow+ans;
   n=n >> 1;
   i++;
   }
   cout<<"answer is : "<<ans;
   return 0;
   
}
