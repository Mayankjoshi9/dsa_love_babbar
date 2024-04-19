#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int target){
    if(s>e){
        return 0;
    }
    int mid=(s+e)/2;
    if (arr[mid]==target)
    {
        return mid;
    }
    else if (arr[mid]>target)
    {
       return binarysearch(arr,s,mid-1,target);
       
    }
    else
    {
        return binarysearch(arr,mid+1,e,target);
       
    }
    
    
    
}
int main(){
    int arr[]={2,5,7,8,10,14};
    int s=0;
    int e=5;
    int target=8;
    cout<<binarysearch(arr,s,e,target)<<endl;
}