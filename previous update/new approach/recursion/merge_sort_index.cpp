#include<bits/stdc++.h>
using namespace std;

int printa(int arr[],int s,int e){
    cout<<"array : "<<endl;
    for (int i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}


void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    
    printa(arr,s,e);
    int mainArrayIndex=s;

    // merge two sorted array
    int index1=0;
    int index2=mid-s+1;

    while (index1<len1 && index2<len2)
    {
        if (arr[index1]>arr[index2])
        {
             swap(arr[index1++],arr[index2]);
        }
        
    }
    printa(arr,s,e);
    cout<<endl;

}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;

    mergeSort(arr,mid+1,e);
    mergeSort(arr,s,mid);
    merge(arr,s,e);
}
int main(){
    int arr[]={19,13,22,15,10};
    int s=0;
    int e=sizeof(arr)/sizeof(int)-1;
    mergeSort(arr,s,e);
    cout<<endl;
    cout<<"new array : "<<endl;
    for (int i = 0; i < e+1; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;  
}