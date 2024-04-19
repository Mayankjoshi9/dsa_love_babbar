#include<bits/stdc++.h>
using namespace std;
void bubble1(int arr[],int size,bool swapped=false){
    if(size==1||size==0){
        return;
    }
    
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
            swapped=true;
        }
        
    }
    if (swapped==false)
    {
        return;
    }
    

    bubble1(arr,size-1);
    
    
}
int main(){
    int arr[6]={7,3,6,2,9,8};
    int size=sizeof(arr)/sizeof(int);
    bubble1(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}