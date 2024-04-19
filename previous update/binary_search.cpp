#include <iostream>
using namespace std;
int indexSearch(int arr[],int size,int key){
    int start=0,end=(size-1);
    int mid=(start)+(end-start)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start)+(end-start)/2;
        
        
    }
    return -1;
    


}
int main(){
    int arr[6]={2,3,4,5,6,8};
    int n;
    cout<<"enter no to search for ";
    cin>>n;
    int index=indexSearch(arr,6,n);
    cout<<"index is "<<index;

}