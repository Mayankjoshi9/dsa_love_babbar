#include<iostream>
using namespace std;
int gcd1(int a,int b){

   if (b ==0){

      return a;

   }

  else{

      return gcd1(b, a%b);

      }

}
int gcd(int a,int b){
    if (a==0)
    {
        return b;
    }
    if (b==0)
    {
        return a;
    }
    
    
    while (a!=b)
    {
        if (a>b)
        {
            // b=a%b;
            // a=b;
            a=a-b;
        }
        else
        {
            // a=b%a;
            // b=a;
            b=b-a;
        }
        

    }
    return a;
    
}
int main(){
    int a,b;
    cout<<"enter values of a and b : ";
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"The gcd of "<<a <<" and "<<b<< " is: "<<ans<<endl;

}