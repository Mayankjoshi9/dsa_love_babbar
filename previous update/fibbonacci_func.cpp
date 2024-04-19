#include <iostream>
using namespace std;
int fab(int n)
{int a=0,b=1;
    for (int i=0; i<n-2;i++)
    {
        b=a+b;
        a=b-a;
    }
    return b;
}
int main()
{
    int n;
    cout<<"enter the no. of fabbonacci no. to print ";
    cin>>n;
    cout<<"nth fabnocci no. is : "<<fab(n);
}
