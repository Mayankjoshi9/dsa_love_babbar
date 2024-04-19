#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no : ";
    cin>>n;
    while (n>1)
    {
        if(n%2==0){
            n=n/2;

        }
        else
        {
            n=0;
        }
        
    }
    if (n==1)
    {
        cout<<"it is multiple of 2 .";

    }
    else {
        cout<<"not multiple of 2";
    }   
    

}