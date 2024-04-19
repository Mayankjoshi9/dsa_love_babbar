#include <iostream>
using namespace std;
int main(){int n,i;
    cout<<"enter no : ";
    cin>>n;

    i=2;      
    while (i<n)
    { if (n%i==0)      {   
        cout<<"n is a not prime"<<endl;
        break;
        
    }
    else    
        
    {if (i==n-1)
    {
       cout<<"n is a prime no\n" ;/* code */
    }
    
        i=i+1;
        
    }
    
     }
    
          
   

    
} 
