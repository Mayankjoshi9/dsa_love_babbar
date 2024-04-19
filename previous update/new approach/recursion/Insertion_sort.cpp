#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int size){
    if (size<=1)
    {
        return;
    }
    insertion(arr,size-1);
    int last=arr[size-1];
    int j=size-2;
    while (j>=0 )
    {
       if(arr[j]>last){
            arr[j+1]=arr[j];
            j--;
       }
       else{
        break;
       }
        
    }
    arr[j+1]=last;

}
int main(){
    int arr[6]={7,3,6,2,9,8};
    int size=sizeof(arr)/sizeof(int);
    insertion(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<"  ";
    }
}