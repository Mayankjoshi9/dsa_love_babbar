    #include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    cout<<"s= "<<s<<endl;
    cout<<"e= "<<e<<endl;
    cout<<endl;

    
    int len1=mid-s+1;
    int len2=e-mid;


    int *first=new int[len1];
    int *second=new int[len2];

    int mainArrayIndex=s;
    for (int i = 0; i < len1; i++)
    {
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex=mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    // merge two sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while (index1<len1 && index2<len2)
    {
        if (first[index1]<second[index2])
        {
            
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            // cout<<"count : "<<count<<endl;
            // count+=len1-index1;
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while (index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }
    while (index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }  
    delete [] first;
    delete [] second;
    // cout<<"count1 : "<<count<<endl<<endl;
    // return count;
}
void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int arr[]={1, 2, 8, 4,5};
    int s=0,count=0;
    int e=sizeof(arr)/sizeof(int)-1;
    mergeSort(arr,s,e);
    // cout<<count<<endl;
    for (int i = 0; i < e+1; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;  
}