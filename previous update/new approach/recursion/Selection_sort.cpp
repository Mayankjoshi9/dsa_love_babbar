#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int size){
    if (size==0||size==1)
    {
        return;
    }
    int minindex=0;
    for (int i = 0; i < size; i++)
    {
         if (arr[i]<arr[minindex])
         {
            minindex=i;
         }
         
    }
    swap(arr[0],arr[minindex]);
    selection(arr+1,size-1);
    
    
}
int main(){
    int arr[6]={7,3,6,2,9,8};
    int size=sizeof(arr)/sizeof(int);
    selection(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
}