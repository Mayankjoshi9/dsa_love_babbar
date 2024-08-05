#include<bits/stdc++.h>
using namespace std;
 void heapify(int arr[],int r,int i){
        int smallest=i;
        int left=2*i+1;
        int right=2*i+2;

        if(left<=r && arr[left]<arr[smallest]){
            smallest=left;
        }
        if(right<=r && arr[right]<arr[smallest]){
            smallest=right;
        }
        
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            heapify(arr,r,smallest);
        }
}
    int kthSmallest(int arr[], int l, int r, int k) {
        for(int i=(r-1)/2;i>=0;i--){
            heapify(arr,r,i);
        }
        for(int i=0;i<k-1;i++){
            
            swap(arr[0],arr[r-i]);
            heapify(arr,r-i-1,0);
        }
        return arr[0];
    }

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<" kth smallest element: "<<kthSmallest(arr,0,size-1,2)<<endl;
}