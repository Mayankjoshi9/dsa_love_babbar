#include<bits/stdc++.h>
using namespace std;
// swapped variable only use to improve time complexity.
void bubble(int arr[],int size){
    for (int i = size-1; i >=0; i--)
    {
        bool swapped=false;
        for (int j = 0; j <i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            } 
        }
        if (swapped==false)
        {
            break;
        }  
    }
}
int main(){
    int arr[]={10,1,7,6,14,9};
    int size=sizeof(arr)/sizeof(int);
    bubble(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}