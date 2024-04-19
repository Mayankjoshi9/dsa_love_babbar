#include<bits/stdc++.h>
using namespace std;
int makeItEqual(int a, int b, int c) {
    int ans=0;
   while(a!=0 || b!=0 || c!=0){
       int bita=a&1,bitb=b&1,bitc=c&1;
       cout<<bita<<bitb<<bitc<<endl;
       if(bitc==0){
           if(bita!=0 && bitb!=0 ){
              ans++;
           }
       }
       else if (bitc==1){
           if(bita==0 && bitb==0){
               ans+=2;
           }
           else if(bita==0 || bitb==0){
               ans++;
           }
       }
       a=a>>1;
       b=b>>1;
       c=c>>1;
   }
   return ans;
}
int main(){
    int a=3;
    int b=1;
    int c=2;
    makeItEqual(a,b,c);
}
