#include<bits/stdc++.h>
using namespace std;

void selection(int arr[],int size){
  for (int i = 0; i < size-1; i++)
  {
    int minindex=i;
    for (int j =i+1; j < size; j++)
    {
        if (arr[minindex]>arr[j])
        {
            minindex=j;
        }     
    }
    swap(arr[minindex],arr[i]);
    
  }
  
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=sizeof(arr)/sizeof(int);
    selection(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}