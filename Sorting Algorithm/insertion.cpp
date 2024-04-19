#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int temp=arr[i];
        int j = i-1;
        for (; j >=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;

        
    }
    
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=sizeof(arr)/sizeof(int);
    insertion(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}