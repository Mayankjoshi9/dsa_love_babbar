#include<iostream>
using namespace std;
int main(){int n,r,p,y,t,r500,r5;
    cout <<"enter no of rupee : ";
    cin>> n;
    int i=0;
    switch (1)
    {
    case 1:r500=n/500;
           n=n%500;
    case 2 :r=n/200;
           n=n%200;
    case 3 :p=n/50;
           n=n%50;
    case 4 :y=n/10;
           n=n%10;
    case 5 :r5=n/5;
           n=n%5;
    case 6 :t=n/1;
        cout<<"500 ruppee are : "<<r500<<endl;
        cout<<"200 ruppee are : "<<r<<endl;
        cout<<"50 ruppee are : "<<p<<endl;
        cout<<"10 ruppee are : "<<y<<endl;
        cout<<"5 ruppee are : "<<r5<<endl;
        cout<<"1 ruppee are : "<<t<<endl;

    
    default:
    cout<<"abhi maza ayegana bhidu .";
        break;
    }
}


