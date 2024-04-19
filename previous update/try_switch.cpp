#include <iostream>
using namespace std;
int print(int n)
{
    n++;
    return n;

}
int main(){
    int n=2;
    cout<<print(n)<<endl;
    cout<<"n is " << n<<endl;
    return putchar(97);

}
