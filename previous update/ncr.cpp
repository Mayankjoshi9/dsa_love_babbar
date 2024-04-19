#include <iostream>
using namespace std;
int factorial(int n)
{int i=1;
    while (n>=1)
    {
        i=n*i;
        n--;
    }
    return i;
    
}
int ncr(int n,int r)
{
    int p=factorial(n)/(factorial(r)*factorial(n-r));
    return p;
}
int main()
{int ans =ncr(5,2);
cout<<"ans is :"<<ans;

    
}
//ncr = n! / r! (n-r)!.