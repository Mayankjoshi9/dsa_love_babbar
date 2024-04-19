#include<iostream>
using namespace std;
void pivotindex(int arr[],int size){
        int ans=-1;

        /*int s=0,e=size-1;
        int m=(s+e)/2;
        
        while (s<=e)
        {
            int lsum=0,rsum=0,p=0,q=size-1;
            cout<<"mid is : "<<m<<endl;
            while(p<m){
                lsum+=arr[p];
                p++;
            }
            cout<<"lsum is "<<lsum<<endl;
            while (m<q)
            {
                rsum+=arr[q];
                q--;
            }
            cout<<"rsum is "<<rsum<<endl;
            if(lsum==rsum){
                ans=m;
                break;
            }
            else if (lsum>rsum)
            {
                e=m-1;
            }
            else if (lsum<rsum)
            {
                s=m+1;
            }
            cout<<"s and e is "<<s<<" "<<e<<endl;
            m=(s+e)/2;}*/  

            for(int i=0;i<size;i++){
            int lsum=0,rsum=0;
            for(int p=0;p<i;p++){
               lsum+=arr[p];
            }
            cout<<"lsum is "<<lsum<<endl;
            for(int q=size-1;q>i;q--){
                rsum+=arr[q];
            }
            cout<<"rsum is "<<rsum<<endl;
            if(lsum==rsum){
                ans=i;
                break;
            }}
        cout<<"pivoted index is "<<ans;     
}
int main(){
    int arr[]={-1,-1,0,0,-1,-1};
    int size=sizeof(arr)/sizeof(int);
    pivotindex(arr,size);
    
}
/*class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        int ans=-1,lsum=0,rsum=0,p=0,q=nums.size()-1;
        int m=s+(e-s)/2;
        while(s<e){
           while(p<m){
               lsum+=nums[p];
               p++;
           }
           while(m<q){
               rsum+=nums[q];
               q--;
           }
           if(lsum==rsum){
               ans=m;
               break;
           }
           else if(lsum>rsum){
               e=m-1;
           }
           else if(lsum<rsum){
               s=m+1;
           }
           m=s+(e-s)/2;
        }
        return ans;

    }
};*/