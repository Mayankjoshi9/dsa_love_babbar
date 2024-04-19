#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[],int size){
    if(size==0){
        return 0;
    }
    int sum=arr[0]+getsum(arr+1,size-1);
    return sum;
}
int main(){
    int arr[5]={3,5,8,9,2};
    int size=5;
    // int target=3;
    int sum=getsum(arr,size);
    cout<<sum<<endl;
}