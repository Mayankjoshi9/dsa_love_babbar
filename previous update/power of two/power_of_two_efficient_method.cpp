#include <iostream>
using namespace std;
bool ispoweroftwo(int n){
    if (n<=0)
    {
        return false;
    }
    return (n & (n-1))==0;
    
}
int main()
{
    int n;
    cout << "enter the no. : ";
    cin >> n;
    ispoweroftwo(n);
    if (ispoweroftwo(n))
    {
        cout<<"it is power of two";
    }
    else{
        cout<<"it is not power of two";
    }
    
}