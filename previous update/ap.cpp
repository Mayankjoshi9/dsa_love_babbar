#include <iostream>
using namespace std;
int ap(int n)
{
    int p=3*n+7;
    return p;

}
int main()
{
   int n;
   cout<<"enter size of A.P. : ";
   cin>>n;
   cout << " last term of A.P. is : " << ap(n);

    
}