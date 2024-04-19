#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e){
    int m=(s+e)/2;
    int len1=m-s+1;
    int len2=e-m;
    // creating two array so that it store two array that have to be merged
    int *arr1=new int[len1];
    int *arr2=new int[len2];
    int index=s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i]=arr[index++];       
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[i]=arr[index++];       
    }
    int index1=0;int index2=0;index=s;

    // merging of two sorted array
    while (index1<len1 && index2<len2)
    {
        if(arr1[index1]>arr2[index2]){
            arr[index++]=arr2[index2++];
        }
        else{
            arr[index++]=arr1[index1++];
        }
    }
    while (index1<len1)
    {
        arr[index++]=arr1[index1++];
    }
    while (index2<len2)
    {
        arr[index++]=arr2[index2++];
    }
    delete []arr1;delete [] arr2;
}
void mergeSort(int arr[],int s,int e){
    if(s==e){
       return;
    }
    int m=(s+e)/2;
    // creating two parts => left and right.
    mergeSort(arr,s,m);
    mergeSort(arr,m+1,e);
    // merging two parts.
    merge(arr,s,e);
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=sizeof(arr)/sizeof(int);
    mergeSort(arr,0,size-1);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
}