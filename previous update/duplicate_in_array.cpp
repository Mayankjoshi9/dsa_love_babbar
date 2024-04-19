#include<iostream>
using namespace std;
void duplicate(int arr[],int size){
    int d=0;
    for (int i = 0; i < (size) ; i++)
    {
        d=arr[i]^(d);
    }
    for (int i = 0; i < size; i++)
    {
        d=d^i;
    }
    
    cout<<"duplicate no. is : "<<d;



}

int main(){
    int arr[34];
    int n,d;
    cout<<"the no. till print ";
    cin>>n;
    for (int i = 0 ; i < (n); i++)
    {
        cin>>arr[i];
       
    }
    duplicate(arr,n);
    
    


}