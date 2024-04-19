#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int target){
    if (size==0)
    {
        return 0;
    }
    if (arr[0]==target)
    {
        return 1;
    }
    int ans=linearsearch(arr+1,size-1,target);
    return ans;
    
    
}
int main(){
    int  arr[]={2,1,53,54,3,2};
     int size=6;
    int target=5;
    cout<<linearsearch(arr,size,target)<<endl;
}