#include <iostream>
using namespace std;
int main(){int p,q;
    int num[4];
    int target=9;
    for (int i = 0; i < 4   ; i++)
    {cout <<"enter no : ";
        cin>>num[i];
       
    }
    int c=0;
    for (int i = 0; i < 4; i++)
    {
     

    for (int j = 0; j < 4; j++)
    {
        if (target==num[i]+num[j]){
            c=1;
           
            p=i;
            q=j;
            j=10;
            i=10;
        }
         
    }
      
    } 
    if (c==1)
    {
        cout <<"p is "<<p<<endl;
        cout <<"q is "<<q<<endl;
    }
    else
    {
        cout<<"nothing found";
    }
    
      
    

return 0;
}