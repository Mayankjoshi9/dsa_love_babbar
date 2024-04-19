#include<bits/stdc++.h>
using namespace std;
bool possible(vector<int>stalls,int k,int mid){
    int sum=stalls[0];
    int cowcount=1;
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-sum>=mid){
            cowcount++;
            sum=stalls[i];

            if (cowcount == k) {
              return 1;
            }
        }
    }
    return 0;
}

int cow(vector<int>stalls,int s,int e,int k,int ans){
    if(s>e){
        return ans;
    }
    int mid=s+(e-s)/2;
    cout<<"mid : "<<mid<<endl;
    cout<<"s : "<<s<<endl;
    cout<<"e : "<<e<<endl;
    if(possible(stalls,k,mid)){
        ans=mid;
        cout<<"possible"<<endl<<endl;
        return cow(stalls,mid+1,e,k,ans);
    }
    else{
        cout<<"not possible"<<endl<<endl;
        return cow(stalls,s,mid-1,k,ans);
    }
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0,e=stalls[stalls.size()-1]-stalls[0];
    int ans=-1;
    ans=cow(stalls,s,e,k,ans);
    return ans;
}
int main(){
    vector<int>stalls={87, 93 ,51 ,81 ,68 ,99 ,59 };
    int k=4;
    int ans=aggressiveCows(stalls,k);
    cout<<"ans : "<<ans<<endl;
}