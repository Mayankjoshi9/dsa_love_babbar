#include <iostream>
using namespace std;
bool prime(int n){
    int i=n-1;
    while (i>1)
    {
        if ((n%i)!=0)
        {
            i--;
            continue;
        }
        else
        {
            return 0;
        }
        return 1;
        
    }
    
}
int main(){int n=71;
     int p=prime(n);
     if(p==1){
        cout << "it is a prime number";
     }
     else if (p==0)
     {
        cout<<"it is not prime number";
     }
     

}