#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no : ";
    cin>>n;
    
    
    long long int ans=0;
    int i=0;
    while (n!=0)
    {
        int bit=n&1;
        cout<<"\nbit is : "<<bit;
        bit=!bit;
        ans=bit*pow(2,i)+ans;
        n=n>>1;
        i++;
        }
    cout <<"\nans is : "<<ans;
    

    
}