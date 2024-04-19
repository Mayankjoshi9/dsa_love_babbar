#include<bits/stdc++.h>
using namespace std;
int printa(int arr[],int size){
    cout<<"array : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for (int i = s+1 ; i <= e; i++)
    {
        if (arr[i]<=pivot)
        {
            count++;
        }
    }
    
    // cout<<"count : "<<count<<endl;
    int pivotIndex=s+count;
    swap(arr[s],arr[pivotIndex]);
    // printa(arr,e);
    int i=s,j=e; 
    while (i<pivotIndex && j>pivotIndex)
    {
        // cout<<"i : "<<i<<" j : "<<j<<endl;
        // while (arr[i]<=pivot)
        // {
        //     i++;
        // }
        
        // while (arr[j]>pivot)
        // {
        //     j--;
        // }
        
        // if(i<pivotIndex && j>pivotIndex ){
        //     // cout<<"swap : "<<arr[i]<<" "<<arr[j]<<endl;
        //     swap(arr[i++],arr[j--]);
            
        // }
        if(arr[i]>pivot){
            if (arr[j]<=pivot)
            {
                swap(arr[i++],arr[j--]);
            }
            else{
                j--;
            }
            
        }
        else{
            i++;
        }
        
    }
    return pivotIndex;
    
}
void quickSort(int arr[],int s,int e){
    if (s>=e)
    {
        return;
    }
    
    int p=partition(arr,s,e);
    // cout<<"p is : "<< p<<endl;
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e); 
}
int main(){
    int arr[]={17,8,20,9,12,18,22,12,52,13,10,8};
    int s=0;
    int e=sizeof(arr)/sizeof(int)-1;
    quickSort(arr,s,e);
    for (int i = 0; i < e+1; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}