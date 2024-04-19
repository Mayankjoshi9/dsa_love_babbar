#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int size){
    int s=0,e=size-1,m=s+(e-s)/2;
    while (s<e)
    {
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;

    }
    return s;
    
}
int main(){
    int arr[]={2,1};
    int size=sizeof(arr)/sizeof(int);
    cout<<"pivoted at "<<pivot(arr,size)<<endl;
    

}