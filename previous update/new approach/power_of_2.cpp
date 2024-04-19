#include <iostream>
using namespace std;
int bitwisecomplement(int n)
{
    int m = n, mask = 0;
    if (n == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        cout<<"mask is "<<mask<<endl;
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}
int main()
{
    int n;
    cout<<"enter no for complement : ";
    cin>>n;
    cout<<bitwisecomplement(n);
}