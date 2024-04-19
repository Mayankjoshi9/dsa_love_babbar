#include<bits/stdc++.h>
using namespace std;

int answer(vector<int>arr,int s,int e,int ans){
        int mid=(e+s)/2;
         if(s>=e){
             return ans;
         }
         cout<<"start : "<<s<<endl;
         cout<<"end : "<<e<<endl;
         cout<<"mid : "<<mid<<endl;
         if(arr[mid]<arr[mid+1]){
            cout<<"less than"<<endl;
            cout<<endl;
             return answer(arr,mid+1,e,ans);
         }
         else if(arr[mid]>arr[mid+1]){
             ans=mid;
             cout<<"ans1 : "<<ans<<endl;
             cout<<endl;
             return answer(arr,s,mid,ans);
         }
         
    }
int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int m=s+(e-s)/2;
        int ans;
        while(s<e){
            if(arr[m]<arr[m+1] ){
                s=m+1;
            }
            else if(arr[m]>arr[m+1]){
                e=m;
                ans=m;
            }
            m=s+(e-s)/2;
        
        }
     return ans;   
    }
int main(){
    vector<int>arr={0,3,2,1,0};
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    cout<<"ans : "<<answer(arr,s,e,ans)<<endl;
    // cout<<"ans1: "<<peakIndexInMountainArray(arr)<<endl;
}