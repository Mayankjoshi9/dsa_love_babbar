#include <iostream>
using namespace std;
int setbit(int a, int b)
{
    int count=0;

    while (a!=0)
    {
       int bit=a&1;
       if (bit==1)
       {
        count++;
        a=a>>1;
       }
       else
       {
        a=a>>1;
       }
    }
    while (b!=0)
    {
       int bit=b&1;
       if (bit==1)
       {
        count++;
        b=b>>1;
       }
       else
       {
        b=b>>1;
       }
    }
    return count;
}
int main()
{int a,b;
cout<<"enter two no.";
cin>>a>>b;
cout<<"no of set bit is :"<<setbit(a,b);

}